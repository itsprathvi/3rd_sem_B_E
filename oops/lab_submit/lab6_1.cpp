#include<iostream>
using namespace std;
class complex
{
    int x,y;
    public:
    complex()
    {
        x=1;
        y=5;
    }
    complex(int a,int b)
    {
        x=a;
        y=b;
    }
    complex operator-(complex z);
    complex operator+(complex z);
    void display();
};

complex complex :: operator -(complex z)
{
    complex res;
    res.x=x-z.x;
    res.y=y-z.y;
    return res;
}

complex complex :: operator +(complex z)
{
    complex res;
    res.x=x+z.x;
    res.y=y+z.y;
    return res;
}

void complex::display()
{
    cout<<"X= "<<x<<"\t"<<"Y= "<<y<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter the Complex Number= \n";
    cin>>a>>b;
    complex c1(a,b);

    cout<<"Enter the Complex Number= \n";
    cin>>a>>b;
    complex c2(a,b);

    c1.display();
    c2.display();

    complex c3;
    c3=c1-c2;
    cout<<"\nThe Difference of the complex Numbers = "<<endl;
    c3.display();

    c3=c1+c2;
    cout<<"\nThe Sum of the complex Numbers = "<<endl;
    c3.display();
    return 0;
}