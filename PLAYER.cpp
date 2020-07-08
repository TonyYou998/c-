#include "PLAYER.h"
#include<string>
#include <iostream>

void PLAYER::input()
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
	cout << "nhap mon phai" << endl;
	printMonPhai();
	cin >> tam;
	monPhai = tam;
	if (monPhai == 1 || monPhai == 2)
		nguHanh = 1;
	else if (monPhai == 7 || monPhai == 8)
		nguHanh = 2;
	else if (monPhai == 3 || monPhai == 4)
		nguHanh = 3;
	else if (monPhai == 9 || monPhai == 10)
		nguHanh = 4;
	else
		nguHanh = 5;
	Atk = level * 5;

	

}

void PLAYER::output()
{
	cout << "name:" << name<<endl;
	cout << "level:" << level << endl;
	cout << "ATK:" << Atk << endl;
	
	cout << "mon phai:";
	xuatMonPhai(monPhai);
	cout << "ngu hanh:";
	
	printNguHanh(nguHanh);
	cout << endl;

}

void PLAYER::printMonPhai()
{
	cout << "1.thieu lam" << endl;
	cout << "2.thien vuong" << endl;
	cout << "3.nga my" << endl;
	cout << "4.thuy yen" << endl;
	cout << "5.con lon" << endl;
	cout << "6.vo dang" << endl;
	cout << "7.5 doc" << endl;
	cout << "8.duong mon" << endl;
	cout << "9.cai ban" << endl;
	cout << "10.thien nhan" << endl;
}












void PLAYER::xuatMonPhai(int x)
{
	switch (x) {
	case 1:
		cout << "thieu lam" << endl;
		break;
	case 2:
		cout << "thien vuong" << endl;
		break;
	case 3:
		cout << "nga my" << endl;
		break;
	case 4:
		cout << "thuy yen" << endl;
		break;
	case 5:
		cout << "con lon" << endl;
		break;
	case 6:
		cout << "vo dang" << endl;
		break;
	case 7:
		cout << "5 doc" << endl;
		break;
	case 8:
		cout << "duong mon" << endl;
		break;
	
	case 9:
		cout << "cai ban" << endl;
		break;
	case 10:
		cout << "thien nhan" << endl;
		break;
	}
}

void PLAYER::printNguHanh(int x)
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

















void PLAYER::tuongSinh()
{
	Atk += (Atk * 10) / 100;
}

void PLAYER::tuongKhac()
{
	Atk -= (Atk * 10) / 100;
}


