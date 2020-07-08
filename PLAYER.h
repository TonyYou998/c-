#pragma once
#include"Character.h"


using namespace std;
class PLAYER:public Character
{
private:
	int monPhai;
	

public:
	 void input();
	 void output();
	 void printMonPhai();
	 
	 void xuatMonPhai(int);
	 void printNguHanh(int);
	
	
	 void tuongSinh();
	 void tuongKhac();
	
};

