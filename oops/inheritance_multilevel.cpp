#include<iostream>
using namespace std;
class A
{
int x;//private

protected:
int z;
void proread()
{
	cout<<"enter the z values\n";
	cin>>z;
}
void prodisplay()
{
	cout<<"value of z is\n";
	cout<<z;
}
public:
void read()
{
	cout<<"enter the value of x\n";
	cin>>x;
	//proread();//valid
	// cin>>z;//valid
}
void display()
{
	cout<<"inside base class\n";
	cout<<x;
	//prodisplay();//valid
	// cout<<z;//valid
}
};
class B :public A
{
int y;
public:
void intput()
{
	cout<<"enter the value of y\n";
	cin>>y;//valid
	// read(); //valid
	// cin>>x; //invalid its private to base
	//cin>>z; //valid
	//proread(); //valid
}
void output()
{
	cout<<"inside derieved class\n";
	cout<<"y="<<y<<endl; //valid
	// cout<<"x="<<x<<endl; //invalid
	// cout<<"z="<<z<<endl; //valid
	// prodisplay(); //valid
	display();
}
};
class C : public B
{
public:
void dis()
{
	proread();
	read();
	intput();
	output();
	cin>>z;
	//cin>>x;
	//proread();//valid
	//prodisplay();//valid
	cout<<"inside the sub1 class\n";
}
};
int main()
{
	C obj1;
	obj1.read();//valid
	obj1.display(); //valid
	//obj1.proread();//invaid protect members
	//obj1.prodisplay();//invalid
	obj1.intput();//valid
	obj1.output();//valid
	obj1.dis();//valid
}
