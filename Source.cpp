#include"Character.h"
#include"PLAYER.h"
#include"NPC.h"
#include<iostream>
using namespace std;
int main() {
	int x;
	cout << "nhap so luopng nhan vat" << endl;
	cin >> x;
	Character* c[100];
	for (int i = 0; i < x; i++) {
		cout << "1.player,2. monster" << endl;
		int select = 0;
		cin >> select;

		switch (select) {
		case 1:
			c[i] = new PLAYER;
			c[i]->input();
			break;
		case 2:
			c[i] = new NPC;
			c[i]->input();
			break;
		}
	}
	for (int i = 0; i < x; i++) {
		c[i]->output();
		cout << "----------------" << endl;
	}
	int max = 0;
	for (int i = 0; i < x; i++) {
		int temp = 0;
		max=c[temp]->getAtk();
		if (c[i]->getAtk() > max) {
			max = c[i]->getAtk();
			temp = i;
		}
			
		if (i == x - 1) {
			cout << "phan tu vo dich thien ha la:" << c[temp]->getName() << endl;
			cout << "Atk:";
			cout << c[temp]->getAtk();
			cout << endl;
		}
			

	}
	string a, b;
	cin.ignore();
	cout << "nhap ten dai hiep 1" << endl;
	getline(cin, a);
	cout << "nhap ten dai hiep 2" << endl;
	getline(cin, b);
	int temp1 = -100, temp2 = -100;
	for (int i = 0; i < x; i++) {
		
		if (c[i]->getName() == a)
			temp1 = i;
		if (c[i]->getName() == b)
			temp2 = i;
	}
	int nguhanh1, nguhanh2;
	nguhanh1 = c[temp1]->getNguHanh();
	nguhanh2 = c[temp2]->getNguHanh();
	if (nguhanh1 - nguhanh2 == -1 || nguhanh1 - nguhanh2 == 4) {
		c[temp1]->tuongSinh();
		c[temp2]->tuongKhac();
	}
	else if (nguhanh1 - nguhanh2 == 1 || nguhanh1 - nguhanh2 == -4) {
		c[temp1]->tuongKhac();
		c[temp2]->tuongSinh();
	}
	cout << "dai hiep 1 gay " << c[temp1]->getAtk() << " cho dai hiep 2" << endl;
	cout << "dai hiep 2 gay " << c[temp2]->getAtk() << " cho dai hiep 1"<<endl;


	return 0;
}