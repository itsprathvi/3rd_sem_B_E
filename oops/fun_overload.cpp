#include<iostream>
using namespace std;

float fun1(float a)
{
	return(3.14*a*a);
}
int fun1(int a,int b)
{
	return(a*b);
}
int fun1(int a)
{
	return(a*a);
}

int main()
{
	float a;
	int b,p,r,q;
	cout<<"Enter the Radius of cirle"<<endl;
	cin>>a;
	r=fun1(a); 
	cout<<"Enter the lenght and breadth of the rectangle"<<endl;
	cin>>a>>b;
	p=fun1(a,b);
	cout<<"Enter the side of the square"<<endl;
	cin>>a;
	q=fun1(a);
	cout<<"Area of Circle : "<<r<<endl<<"Area of Rectangle : "<<p<<endl<<"Area of Square : "<<q<<endl;
	return 0;
}
	
