#include<iostream>
using namespace std;
class go
{
	int x;
	int y;
	int *ptr;
	int *ptr1;
public:
	go()
	{
		x=10;
		y=15;
		ptr=new int;
		ptr1=new int;
		*ptr=13;
		*ptr1=20;
	}
	go(int a,int b)
	{
		this->x=a;
		this->y=b;
		ptr=new int;
		ptr1=new int;
		*ptr=a;
		*ptr1=b;
	}
	void display()
	{
		cout<<"X="<<x<<endl<<"Y="<<y<<endl;
	}
	void display1()
	{
		cout<<"X="<<*ptr<<endl<<"Y="<<*ptr1<<endl;
	}
	~go()
	{
		cout<<"Destructor Called"<<endl;
		free(ptr);
		free(ptr1);
	}
};
int main()
{
	cout<<"Default Constructor"<<endl;
	go x1;//Default
	x1.display();
	cout<<"Paramatrized Constructor"<<endl;
	go x2(100,150);//Paramatrized
	x2.display();
	cout<<"Copy Constructor"<<endl;
	go x3(x2);//Copy
	x3.display();
	cout<<"Copy Constructor"<<endl;
	go x4=x2;//Copy
	x4.display();
	int p, q;
	cout<<"Paramatrized Constructor with Dynamic Initialization"<<endl;
	cout<<"Enter two Values = ";
	cin>>p>>q;
	go ex5(p,q);//Dynamic Initialization
	ex5.display();
	cout<<"Dynamic Constructor"<<endl;
	go ex6;//Dynamic Constructor
	ex6.display1();
	cout<<"Dynamic Constructor"<<endl;
	go ex7(25,67);
	ex7.display1();
	return 0;
}
