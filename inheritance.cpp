#include<iostream>
using namespace std;
class A
{

	int a=10;
protected:
	int aA=100;
public:
	void disp(){cout<<a<<endl;}

};

class B:protected  A
{
	int b=20;

public:
	void disp(){cout<<b<<"\t"<<aA<<endl;}
};

class C:protected A
{
	int c=30;
public:
	void disp(){cout<<aA<<endl;}
};

class D:public B,C
{
	int d=50;
public:
	void disp(){cout<<d<<endl;}
};

int main()
{
	C d;
	d.disp();
	return 0;
}
