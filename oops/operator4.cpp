#include<iostream>
using namespace std;
class space
{
    int x,y,z;
public:
    friend void operator -(space &s1); //you cannot access alone you have to accompany with class name
    friend void getdata(int a,int b,int c,space &s1);
    void display();

};
void operator-(space &s1)
{
    s1.x=-s1.x;
    s1.y=-s1.y;
    s1.z=-s1.z;
}
void getdata(int a,int b,int c,space &s1)
{
   s1.x= a;
   s1.y= b;
   s1.z= c;
}
void space :: display()
{
    cout<<"Elements are\n"<<x<<"\t"<<y<<"\t"<<z<<endl;
}
int main()
{
    space s1;
    getdata(2,-5,-6,s1);
    s1.display();
    -s1;//opearator-(s1) //compiler will convert
    s1.display();
    return 0;
}
