#include<iostream>
using namespace std;

class myfun1;
class myfun2;

class myfun1
{
	int x;
public:
	void read(int a)
	{
		this->x=a;
	}
	void display()
	{
		cout<<"X = "<<x;
	}
	friend int add(myfun1&,myfun2&);
};

class myfun2
{
	int y;
public:
	void read(int a)
	{
		this->y=a;
	}
	void display()
	{
		cout<<"Y = "<<y;
	}
	friend int add(myfun1&,myfun2&);
};

int add(myfun1 &a,myfun2 &b)
{
	return(a.x+b.y);
}

int main()
{
	myfun1 a;
	myfun2 b;
	int x,y;
	cout<<"Enter the two values";
	cin>>x>>y;
	a.read(x);
	b.read(y);
	a.display();
	b.display();
	int w=add(a,b);
	cout<<"THE ADDITION IS "<<w<<endl;
}

