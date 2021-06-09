#include<iostream>
using namespace std;
class first;//predeclaration or forward declaration
class second
{
    int y;
    public:
    void read()
    {
        cout<<"enter y value"<<endl;
        cin>>y;
    }
    void display()
    {
        cout<<y;
    }
    friend void add(first,second);
};
class first
{
    int x;
    public:
    void read()
    {
        cout<<"enter x value"<<endl;
        cin>>x;
    }
    void display()
    {
        cout<<x;
    }
    friend void add(first,second);
};
void add(first obj1,second obj2)
{
    cout<<"result of adding two member variables = "<<obj1.x+obj2.y;
}
int main()
{
    first a;
    second b;
    a.read();
    b.read();
    add(a,b);
}

