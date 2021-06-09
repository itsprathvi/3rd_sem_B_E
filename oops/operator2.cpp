/*Program to demonstrate binary operator overloading function is
friend function*/
#include<iostream>
using namespace std;
class complex
{
int x,y;
public:
complex()
{
x=0;
y=0;
}
complex(int a,int b)
{
x=a;
y=b;
}
friend complex operator +(complex z1,complex z2); //complex add(complex z)
void display()
{
cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
}
};
complex operator+(complex z1,complex z2)
{
complex res;
res.x=z1.x+z2.x;
res.y=z1.y+z2.y;
return res;
}

                                  
int main()
{
	int a,b;
	cout<<"enter the first complex number\n";
	cin>>a>>b;
	complex c1(a,b);

	cout<<"enter the second complex number\n";
	cin>>a>>b;
	complex c2(a,b);

	cout<<"complex numbers are\n";
	c1.display();
	c2.display();

	complex c3;
	//c3=c1.add(c2);
	c3=c1+c2;//c3=operator +(c1,c2);
	cout<<"result is \n";

	c3.display();
	return 0;
}
