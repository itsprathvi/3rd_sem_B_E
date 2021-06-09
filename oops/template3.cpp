#include <iostream>  
using namespace std;  
template<class X,class Y> 

void fun(X a,Y b)  
{  
    cout << "Value of a is : " <<a<<endl;  
    cout << "Value of b is : " <<b<<endl;  
}  

int main()  
{  
   fun(15,12.3);
   fun(29.8,"hello");  
   fun('a',1234567899);
   
   return 0;  
}
