// test610-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CMeter
{
protected:
	int a;
public:
	CMeter()
	{
		a = 0;
	}
	CMeter(int s)
	{
		a = s;
	}
	void display()
	{
		cout << "a=" << a << endl;
	}
};
class CFeet :public CMeter
{
public:
	CFeet()
	{
		a = 0;
	}
	CFeet(int s)
	{
		a = s;
	}
};
int main()
{
	CFeet o(10);
	o.display();
    return 0;
}

