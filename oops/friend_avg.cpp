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
	friend void avg(first,second);
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
		cout<<"Y="<<this->p<<endl;
	}
	friend void avg(first,second);
};

void avg(first x,second y)
{
	int c;
	c=(x.p+y.p)/2 ;
	cout<<c<<endl;
}

int main()
{
	first a;
	second b;
	int x,y;
	cout<<"Enter first value = ";
	cin>>x;
	cout<<endl;
	a.read(x);
	cout<<"Enter second value = ";
	cin>>y;
	cout<<endl;
	b.read(y);
	cout<<"The Two Numbers"<<endl;
	a.display();
	b.display();
	cout<<"Average of two numbers = "<<endl;
	avg(a,b);
}
	
	
