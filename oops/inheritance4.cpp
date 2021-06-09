//Program to demonstrate private mode of inheritance in single inheritance
#include<iostream>
using namespace std;
class Abase
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
cout<<x;
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
//cout<<x; //valid
}
};
class sub :private Abase
{
int y; //private : z,proread(),prodisplay(),read() and display()
public:
void input()
{
cout<<"enter the value of y\n";
cin>>y;//valid
// read();//valid
// cin>>x; //invalid its private to base
cin>>z;//valid
proread();//valid

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
int main()
{
Abase obj;
// obj.x=10;//invalid private variable
obj.read();//valid public of base
obj.display();//valid
sub obj1;
//obj1.read();//invalid they r in private section of derieved
//obj1.display();//invalid
obj1.input();//valid public section of sub section
obj1.output();//valid
// obj.input();//invalid
// obj.output();//invalid
//obj.z=100;// invalid
//obj.proread();//invalid protect of base
//obj.prodisplay();//invalid
//obj1.z=200;// invalid private of derieved
//obj1.proread();//invalid
//obj1.prodisplay();//invalid
}
