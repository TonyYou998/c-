
#include<iostream>
using namespace std;
struct TNode
{
	int Data;
	TNode* tLeft;
	TNode* tRight;
};
typedef TNode* Tree;
int InsertNode(Tree& T, int x)
{
	if (T)
	{
		if (T->Data > x)
			return InsertNode(T->tLeft, x);
		else
			return InsertNode(T->tRight, x);
	}
	T = new TNode;
	T->Data = x;
	T->tLeft = T->tRight = NULL;
	return 1;
}
void LNR(Tree T)
{
	if (T != NULL)
	{
		LNR(T->tLeft);
		cout << T->Data << " ";
		LNR(T->tRight);
	}
}
int dem(Tree t){
	if (t != NULL) {
	
		int a = dem(t->tLeft);
		int b = dem(t->tRight);
		
		
		if (t->tLeft != NULL && t->tRight != NULL)
			return 1 + a + b;
		return a + b;

	}
	return 0;
}
TNode* SearchTNode(Tree T, int x)
{
	if (T != NULL)
	{
		if (T->Data == x)
			return T;
		else
			if (x > T->Data)
				return SearchTNode(T->tRight, x);
			else
				return SearchTNode(T->tLeft, x);
	}
	return NULL;
}



int main()
{
	Tree T = NULL;
	int temp;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		InsertNode(T, temp);
	}
	//LNR(T);
	//bài 1
	//cout << "so nut bac 2 la " << dem(T);
	//bài 2
	int x;
	cin >> x;
	Tree TEMP;
	TEMP = SearchTNode(T, x);
	if (TEMP != NULL) {
		TEMP=TEMP->tRight;
		cout <<"so nut bac 2 cua cay con phai la "
			<<dem(TEMP);
	}
	
	return 0;
}