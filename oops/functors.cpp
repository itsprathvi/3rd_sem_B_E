//Program to illustrate functors
#include <iostream>  
using namespace std;  
int add(int a , int b=7)  
{  
    return a+b;  
}  
int sub(int a , int b=7)  
{  
    return a-b;  
}  
int main()  
{  
 int (*funcptr)(int,int);  // function pointer declaration  
 //int (*fptr)(int);
 funcptr=add; // funcptr is pointing to the add function  
 int sum=funcptr(5,5);  
cout << "value of sum is :" <<sum<<endl;  
 //sum=fptr(4);
//cout<<"value of sum is:"<<sum<<endl;
 funcptr=sub;
  int res=funcptr(6,4);
cout << "value of sub is :" <<res<<endl;  
  return 0;  
}  

