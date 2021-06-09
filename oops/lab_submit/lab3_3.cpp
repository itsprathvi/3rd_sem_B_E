#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
    void read(int, int);
    void display();
    friend complex add(int, complex);
    friend complex add(complex, complex);
};

void complex::read(int x,int y)
{
    this->real = x;
    this->imaginary = y;
}
void complex::display()
{
    cout<<this->real<<"+"<<this->imaginary<<"i"<<endl;
}

complex add(complex b, complex a)
{
    complex res;
    res.real = a.real + b.real;
    res.imaginary = a.imaginary + b.imaginary;
    return res;
}
complex add(int a, complex b)
{
    complex res;
    res.real = a + b.real;
    res.imaginary = b.imaginary;
    return res;
}

int main()
{
    complex a,b,r,d;
    int i,j;
    cout<<"Enter real and imaginary number of 1st complex: ";
    cin>>i>>j;
    a.read(i,j);
    cout<<"Enter real and imaginary number of 2nd complex: ";
    cin>>i>>j;
    b.read(i,j);
    r = add(a,b);
    r.display();
    cout<<"Enter an integer: ";
    cin>>i;
    d = add(i, a);
    d.display();
}
