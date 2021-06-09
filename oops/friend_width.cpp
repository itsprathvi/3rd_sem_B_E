#include<iostream>
using namespace std;

class width
{
	int p;
public:
	void read(int x)
	{
		this->p=x;
	}
	void display()
	{
		cout<<"Y="<<p<<endl;
	}
	friend void display1(width);
}; 

void display1(width &x)
{
	cout<<"Y="<<x.p<<endl;
}

int main()
{
	width a,b;
	int x;
	cout<<"Enter the value = ";
	cin>>x;
	cout<<endl;
	a.read(x);
	a.display();
	display1(a);
	//b.display1();
}
	
