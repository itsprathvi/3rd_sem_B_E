#include<iostream>
using namespace std;

class base
{
	int n;
protected:
	int y;
	void proread()
	{
		cout<<"Enter the Value = "<<endl;
		cin>>y;
	}
	void prodisplay()
	{
		cout<<"Y = "<<y<<endl;
	}
	
public:
	void read()
	{
		cout<<"Enter=";
		cin>>y;
	}
	void display()
	{
		cout<<y<<endl;
		proread();
		prodisplay();
	}
};

class sub :public base
{
	int z;
	protected:
	int m;
	void proread1()
	{
		cout<<"Enter the Value = "<<endl;
		cin>>m;

	}
	void prodisplay1()
	{
		cout<<"M = "<<m<<endl;
	}
	public:
	void input()
	{
		cout<<"Enter the Number: ";
		cin>>z;
		proread();
		prodisplay();
	}
	void output()
	{
		cout<<z<<endl;
		input();
		output();
	}
};

int main()
{
	base obj;
	sub obj1;
	//obj.proread();
	//obj.prodisplay();
	obj.read();
	obj.display();
	obj1.input();
	obj1.output();
	//obj1.proread1();
	//obj1.prodisplay1();
	//obj1.proread();
	//obj1.prodisplay();
	obj1.read();
	obj1.display();
	return 0;
}


