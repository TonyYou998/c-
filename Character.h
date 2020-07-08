#pragma once
#include<string>
using namespace std;
class Character
{
	protected:
		string name="";
		float Atk=0;
		int level=0;
		int nguHanh = 0;
	public:
		
		Character();
		~Character();
			float getAtk();
			string getName();
			int getNguHanh();
			virtual void input() = 0;
			virtual void output() = 0;
			virtual void printNguHanh(int) = 0;
			virtual void tuongSinh()=0;
			virtual void tuongKhac()=0;
			
			
};

