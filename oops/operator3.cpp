#include<iostream>
using namespace std;
class space
{
    int x,y,z;
public:
    void operator -();
    void getdata(int ,int ,int );
    void display();

};
void space :: operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
void space :: getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void space :: display()
{
    cout<<"Elements = "<<x<<"\t"<<y<<"\t"<<z<<endl;
}
int main()
{
    space s;
    int a,b,c;
    cout<<"enter the values\n"<<endl;
    cin>>a>>b>>c;
    s.getdata(a,b,c);
    s.display();
    -s; //s.opearator-()
    s.display();
    return 0;
}
