//constructors for multilevel inheritance

#include<iostream>
using namespace std;
class A
{
public:
A( )
{
cout<<"\n Constructor of class A is invoked";
}
~A()
{
cout<<"\n Destructor of class A \n";
}
};
class B : public A
{
public:
B( )
{
cout<<"\n Constructor of class B is invoked";
}
~B()
{
cout<<"\n Destructor of class B \n";
}
};
class C : public B
{
public:
C( )
{
cout<<"\n Constructor of class C is invoked\n";
}
~C()
{
cout<<"\n Destructor of class C \n";
}
};

int main()
{
cout<<"\n The first object is\n";
//A a1;
C c1 ;
//B b1;
return 0;
}
