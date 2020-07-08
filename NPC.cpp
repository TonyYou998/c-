#include "NPC.h"
#include <iostream>

void NPC::input()
{
	cin.ignore();
	string temp;
	cout << "nhap ten nhan vat" << endl;
	getline(cin, temp);
	
	name = temp;
	int tam;
	
	cout << "nhap level" << endl;
	cin >> tam;
	level = tam;
	cout << "nhap loai quai vat" << endl;
	cout << "1.quai thuong,2.quai dau linh" <<endl;

	cin >> tam;
	loaiMonster = tam;
	
	cout << "1.kim 2.moc 3.thuy 4.hoa 5.tho" << endl;
	cout << "nhap ngu hanh" << endl;
	
	cin >> tam;
	nguHanh = tam;
	if (loaiMonster == 1)
		Atk = level * 3;
	if (loaiMonster == 2)
		Atk = level * 7;

}

void NPC::output()
{
	cout << "name:" << name << endl;
	cout << "level:" << level;
	cout << "loai quai:";
	inLoaiQuai(loaiMonster);
	cout << endl;
	cout << "ATK" << Atk << endl;
	cout << "ngu hanh:";
	printNguHanh(nguHanh);
}

void NPC::inLoaiQuai(int x)
{
	if (x == 1)
		cout << "quai thong thuong" << endl;
	if (x == 2)
		cout << "dau linh" << endl;
}


void NPC::printNguHanh(int x)
{
	switch (x) {
	case 1:
		cout << "kim" << endl;
		break;
	case 2:
		cout << "moc" << endl;
		break;
	case 3:
		cout << "thuy" << endl;
		break;
	case 4:
		cout << "hoa" << endl;
		break;
	case 5:
		cout << "tho" << endl;
		break;
	}
}



void NPC::tuongSinh()
{
	Atk += (Atk * 10) / 100;
}

void NPC::tuongKhac()
{
	Atk -= (Atk + 10) / 100;
}
