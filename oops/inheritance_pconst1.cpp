//Program for parametrized constructor
#include<iostream>
using namespace std;
class A
{
public:
A( )
{
cout<<"\n Constructor of class A is invoked";
}

};
class B : public A
{
protected:
int y ;
public:
B( ) : A( )
{
y=0;
cout<<"\n Constructor of class B without any argument is invoked";
}
B(int X):A()
{
y=X;
cout<<"\n Constructor of class B is invoked";
}
void displayy()
{ 
	cout<<"\n\t y= "<<y;
}
};
class C : public B
{
public:
C( ) : B( )
{
cout<<"\n Constructor of class C is invoked\n";
}
C(int X):B(X)
{

cout<<"\n Constructor of class C is invoked";
}

};

int main()
{
cout<<"\n\n The second object is\n";
C c2(5);
c2.displayy( );
return 0;
}
