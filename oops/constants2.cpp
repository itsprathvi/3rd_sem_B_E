#include<iostream>
using namespace std;
const int fun(int x,const int y)
{
    x=x+y;   //valid
   // y=x+y; //Invalid
    return(x);
}
int func(const int a,const char b)
{
  //  a=100; //Invalid
  //  b='f'; //Invalid
    int x=a+4;
    char d=b+4;
    cout<<"D= "<<d<<endl<<"X= "<<x<<endl;
    return(x);
}
int main()
{
    int tot=fun(4,5);
    cout<<"tot= "<<tot<<endl;
    tot=fun(15,7);
    cout<<"tot= "<<tot<<endl;
    tot=func(4,'a');
    cout<<tot;
    tot=tot+10;
    cout<<"ANDE :"<<tot<<endl;
    tot=func(100,'f');
    cout<<tot<<endl;

//Character to ASCII VALUE
    char t='a';
    int j=t;
    cout<<"J= "<<j<<endl;
//ASCII to Character VALUE
    int z=97;
    char w=z;
    cout<<"J= "<<w<<endl;
}