//Program for protected variables in single inheritance
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
class sub :public Abase
{
int y; //protected section : z,proread,prodisplay
public: //read and display
void input()
{
cout<<"enter the value of y\n";
cin>>y;//valid because its accessing its own variable
// read();//valid
// cin>>x; //invalid private varaible
cin>>z;//valid protected variables
proread(); //valid
}
void output()
{
cout<<"inside derieved class\n";
cout<<"y="<<y<<endl; //valid
// cout<<"x="<<x<<endl; //invalid
// cout<<"z="<<z<<endl; //valid
// prodisplay(); //valid
display();//valid
}
};
int main()
{
Abase obj;
// obj.x=10;//invalid
obj.read(); //valid public section
obj.display();//valid
//obj.proread();//invalid protected
sub obj1;
obj1.read();//valid public section
obj1.display();//valid
obj1.input();//valid
obj1.output();//valid
// obj.input();//invalid obj cannot see input()
// obj.output();//invlaid
//obj.z=100;//invalid protected
//obj.proread();//invalid
//obj.prodisplay();//invalid
//obj1.z=200;//invlaid
//obj1.proread();invalid
//obj1.prodisplay();invalid
}
