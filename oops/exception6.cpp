//Program 4
/*#include<iostream>
using namespace std;
int main()
{
  int a=4;
  int b;
  float c;
 try{
 
  cout<<"enter the value of b\n";
  cin>>b;
  if(b!=0)
  {
  c= a/b;
  cout<<c;
  }
else
 {
  cout<<"control reached here\n";
  throw b;
  cout<<"this message is not displayed\n";
  }
 cout<<"this message is outside division\n";
}   
catch(int i)
 {
  cout<<"denominator should not be zero \n";
}
}







#include<iostream>
using namespace std;
int main()
{
 try{

  int a=4;
  int b=0;
  float c;
  if(b==0)
   throw 6.7;
   c= a/b;
  cout<<c;
  }
 catch(...)
 {
  cout<<"divide by zero error\n";
 }
}


#include<iostream>
using namespace std;
int main()
{
 try{

  int a=4;
  int b=0;
  float c;
  if(b==0)
   throw 0;
   c= a/b;
  cout<<c;
  }
 catch(int i)
 {
  cout<<"denomiantor should not be  zero error\n";
}
}
*/
#include<iostream>
using namespace std;
int main()
{
 try{

  int a=4;
  int b=5;
  float c;
  if(b==0)
  {
    throw 'c';// throw c
    c= a/b;
    // cout<<c;
    //throw 2;
  }
  else
    throw c;
  }
 catch(char i) //catch(float f)
 {
  cout<<"denomiantor should not be  zero its an error\n";
}
  catch(float f)
  {
   cout<<"user exception handler for float\n";
  }
 catch(...)
 {
  cout<<"integer exception handler\n";
}
}






