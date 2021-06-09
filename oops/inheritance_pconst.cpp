//Program for parametrized constructor
#include<iostream>
using namespace std;

int a = 10;
class A
{
protected:
int x ;
public:
A( )
{
x = 0 ;
cout<<"\n Constructor of class A without any argument is invoked";
}
A(int X) // Constructor with one argument
{
x = X ;
cout <<"\n Constructor of class A with one argument is invoked";
}
void readx(void)
{ 
	cout<<"\n\t Enter the value of x: ";
	cin>>x ; 
}
	
void displayx(void)
{ 
	cout<<"\n\t x ="<<x;
}
};
class B : public A
{
protected:
int y ;
public:
B( ) : A( )
{
y = 0;
cout<<"\n Constructor of class B without any argument is invoked";
}
B( int X,int Y ):A(X), y(Y)
{
y = Y;
cout<<"\n Constructor of class B with two arguments in invoked";
}
void ready(void)
{
	cout<<"\t Enter the value of y: ";
	cin>>y ;
}
void displayy(void)
{
	cout<<"\n\t y = "<< y ;
}
};

class C : public B
{
private:

int z ;
public:
C( ) : B( )
{
z = 0;
cout <<"\n Constructor of class C without any argument is invoked\n" ;
}
C(int X, int Y, int Z):B(X, Y)
{
	z = Z ;
	cout <<"\n Constructor of class C with three arguments is invoked "<<z;
}
void readz()
{
	cout <<"\t Enter the value of z: ";
	cin>> z ;
}
void displayz()
{
cout<<"\n\t z = "<<z ;
}
};

int main()
{
int p,q,s, a = 5;
// cout<<"\n The first object is\n";
// C c1 ;
// c1.readx( );
// c1.ready( );
// c1.readz( );
// c1.displayx( );
// c1.displayy( );
// c1.displayz( );
// cout<<"\n\n The second object is\n";
cout<<"Enter the 3 values\n";
cin>>p>>q>>s;
C c2(p, q, s) ;
c2.displayx( );
c2.displayy( );
c2.displayz( );
cout << a;
cout << ::a;
return 0;
}
