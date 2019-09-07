using namespace std;
#include<iostream>
class Person
{
	int adharno;
	string name;
public :
	 void displayDetails(){
		cout<<"from person class :";
		cout<<endl<<adharno<<"\t"<<name;}
		virtual double calcSal()=0;
};

class Employee:public Person
{
	int empno;
public:
	void displayDetails(){cout<<"inside Employee class:"<<endl;
	cout<<empno;}

	double calcSal(){return 10.0;}

};

int main()
{
Person *p=new Employee();
p->displayDetails();

}
