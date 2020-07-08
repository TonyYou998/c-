#pragma once
#include"Character.h"

class NPC:public Character
{
private:
	int loaiMonster;
	
	
public:
	void input();
	void output();
	void inLoaiQuai(int);
	void printNguHanh(int);

	void tuongSinh();
	void tuongKhac();
	

};

