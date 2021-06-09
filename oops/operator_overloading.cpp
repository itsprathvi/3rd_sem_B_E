#include<iostream>
using namespace std;
class complex
{
int x,y;
public:
complex() //default
{
x=0;
y=0;
}
complex(int a,int b=6) //parmetrized constructor with default argument
{
x=a;
y=b;
}
complex operator +(complex z); //complex add(complex z)
friend complex operator *(complex z,int s);
void display()
{
cout<<"x= "<<x<<"\t"<<"y= "<<y<<endl;
}
};
complex complex:: operator+(complex z)
{
complex res;
res.x=x+z.x;
res.y=y+z.y;
return res;
}
complex operator *(complex z,int s)
{
complex res;
res.x=s*z.x;
res.y=s*z.y;
return res;
}
int main()
{
int a,b;
cout<<"Enter the first complex number\n";
cin>>a>>b;
complex c1(a,b); //dynamic initilization
cout<<"Enter the second complex number\n";
cin>>a>>b;
complex c2(a,b);
complex c3;
cout<<"complex numbers are\n";
c1.display();
c2.display();
//c3=c1.add(c2);
c3=c1+c2;//c3=c1.operator +(c2); //c3=c2+c1 ===&gt; c3=c2.operator+(c1);
cout<<"Result is \n";
c3.display();
cout<<"Enter an scalar value\n";
int p;
cin>>p;
c3=c1*p;
c3.display();
return 0;
}