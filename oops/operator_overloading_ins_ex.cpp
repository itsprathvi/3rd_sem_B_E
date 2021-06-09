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
complex(int a,int b) //parmetrized constructor with default argument
{
x=a;
y=b;
}
friend istream& operator>>(istream &input,complex &c);//input
friend ostream& operator<<(ostream &output,complex &c); //output
};

istream& operator>>(istream &input,complex &c)
{
    input>>c.x;
    input>>c.y;
    return(input);
}
ostream& operator<<(ostream &output,complex &c)
{
    output<<c.x;
    output<<c.y;
    return(output);
}
int main()
{
complex c1,c2;
cout<<"Enter the first complex number\n";
cin>>c1; //c1.read(); cin=operator >>(cin,c1)
cout<<"Enter the second complex number\n";
cin>>c2; //c2.read();
cout<<"Complex numbers are\n";
cout<<c1<<endl; //c1.display(); cout=operator&lt;&lt;(cout,c1);
cout<<c2<<endl; // c2.display();
}