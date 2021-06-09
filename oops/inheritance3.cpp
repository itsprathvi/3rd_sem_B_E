//Program to demonstrate protected variables in non -subclass
#include<iostream>
using namespace std;
class demo
{
int x;
void read()
{
cin>>x;
} //private
protected:
int y;
void proread()
{
read();
cin>>x>>y;
}
public:
int z;
void display()
{
proread();
read();
cout<<"x="<<"\t"<<x<<"y="<<y<<"\t"<<"z="<<"\t"<<z<<endl;
}
};
int main()
{
demo obj;
/* obj.x; //invalid private member
obj.read(); //invalid private function
obj.proread(); //not accessible
obj.y; //not accessible*/
obj.z=200; //valid
obj.display();//valid
}
