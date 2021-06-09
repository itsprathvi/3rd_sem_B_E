//Program to demonstrate single inheritance with public mode of inheritance
#include<iostream>
using namespace std;
class Abase //base class
{
int x;//private
public:
void read()
{
cout<<"enter the value of x\n";
cin>>x;
}
void display()
{
cout<<"inside base class\n";
cout<<x;
}
};
class sub :public Abase //derieved class
{
int y;
public:
void input()
{
cout<<"enter the value of y\n";
cin>>y;
cout<<"read invoked inside derieved class\n";
read();//valid
// cin>>x; //invalid x is private of base class
}
void output()
{
cout<<"inside derieved class\n";
cout<<"y="<<y<<endl;
// cout<<"x="<<x<<endl; //invalid
display();//valid
}
};
int main()
{
Abase obj;
// obj.x=10;//invalid its private
cout<<"read invoked with object of base class\n";
obj.read();//valid
obj.display();//valid
sub obj1;
cout<<"print the value of x through derieved object\n";
obj1.input();
obj1.output();
cout<<"read invoked with object of derieved class\n";
obj1.read();//valid
obj1.display();//valid
cout<<"inout invoked with object of derieved class\n";
obj1.input();//valid
obj1.output();//valid
// obj.input();//invalid //we dont have input function
// obj.output();//invalid //we dont have output function
// obj.y=100;//invalid //it is not visible to object of parent
// obj1.y=100;//invalid //it is private variable
}
