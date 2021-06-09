#include<iostream>
using namespace std;

class complex
{
 int x;
 int y;
public:
	complex() //Default Constructor
	{
		x=10;
		y=20;
	}
	complex(int x,int y) //Paramaterized Constructor
	{
		this->x=x;
		this->y=y;
	}
	void read()
	{
		cin>>x>>y;
	}
	void display()
	{
		cout<<x<<"+"<<y<<"i"<<endl;
	}
};

int main()
{
	complex a; //Default Constructor
	a.display();
	complex b(20,30); //Paramaterized Constructor
	b.display();
	b.read();
	b.display();
	cout<<"Enter the Value="<<endl;
	int p,q;
	cin>>p>>q;
	complex c(p,q); //Dynamic Initialization
	c.display();
}
	
	




