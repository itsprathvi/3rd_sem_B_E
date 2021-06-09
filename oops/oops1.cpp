#include <iostream>
using namespace std;
void fun(int *p)//call by address
{
    *p = *p+10;
    cout<<*p<<endl<<p<<endl;
}
void fun1(int &y)//call by reference
{
    y = y+10;
    cout<<&y<<endl<<y<<endl;
}
int main()
{
  int x;
  cout<<"Enter the value of x"<<endl;
  cin>>x;
  fun1(x);//call by reference
  cout<<x<<endl;
  cout<<&x<<endl;
  fun(&x);//call by address
  cout<<x<<endl<<&x;
  return 0;
}

