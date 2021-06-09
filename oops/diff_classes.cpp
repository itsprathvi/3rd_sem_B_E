#include<iostream>
using namespace std;

class first;
class second;

class first
{
	int p;
public:
	void read(int x)
	{
		this->p=x;
	}
	void display()
	{
		cout<<"X="<<p<<endl;
	}
	friend void swap(first& ,second&);
	friend int add(first&,second&);
}; 

class second
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
	friend void swap(first& ,second&);
	friend int add(first&,second&);
}; 

void swap(first &x, second &y)
{
	int temp;
	temp=y.p;
	y.p=x.p;
	x.p=temp;
}

int add(first &x ,second &y)
{
	int z;
	z=x.p+y.p;
	return(z);
}
	
int main()
{
	first a;
	second b;
	int x,y;
	cout<<"Enter the first value"<<endl;
	cin>>x;
	a.read(x);
	cout<<"Enter the second value"<<endl;
	cin>>y;
	b.read(y);
	cout<<"Before swapping"<<endl;
	a.display();
	b.display();
	cout<<"After Swapping"<<endl;
	swap(a,b);
	a.display();
	b.display();
	int sum = add(a,b);
	cout<<"Sum of two Numbers = "<<sum<<endl;
}
