#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
        complex()
        {}
    complex(int a, int b)
    {   
        real = a;
        imaginary = b;
    }
    void read(int, int);
    void display();
    friend complex add(complex a, complex b);
    //void add_without_return(complex ,complex);
};

void complex::read(int x,int y)
{
    real = x;
    imaginary = y;
}
void complex::display()
{
    cout<<real<<"+"<<imaginary<<"i"<<endl;
}

// complex complex::add(complex b)
// {
//     complex res;
//     res.real = this->real + b.real;
//     res.imaginary = this->imaginary + b.imaginary;
//     return res;
// }

//void complex::add_without_return(complex a, complex b)
complex add(complex a, complex b)
{
    int r, im;
    r = a.real + b.real;
    im = a.imaginary + b.imaginary;
    return complex(r,im);
}

int main()
{
    complex a, b;//a(1,2),b(3,6);
    int i,j;
    // cout<<"Enter real and imaginary number of 1st complex:";
    // cin>>i>>j;
    a.read(5,2);
    //cout<<"Enter real and imaginary number of 2nd complex:";
    //cin>>i>>j;
    b.read(3,6);
    complex r = add(a, b);
    r.display();
    //d.add_without_return(a,b);
    //d.display();
}
