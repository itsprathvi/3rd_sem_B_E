#include<iostream>
using namespace std;

class first; // forward declaration of A needed by B

class second
{
public:
       /* void input(first obj)
                 {
            cin>>obj.x;
            cout<<"in class second\n";
        }*/
        void display(first o); //no body declared
};

class first
{
    int x;
public:
    void read()
	{
		x = 20;
	}
    void dis()
    {
    	cout<<x;
    }
    friend void second::display(first);
};

void second::display(first obj)
{
    cout << obj.x << endl;
}

int main()
{
    first a;
    second b;
    a.read();
//  b.input(a);
    b.display(a);// display of class B is a freind of class A
    a.dis();
    return 0;
}
