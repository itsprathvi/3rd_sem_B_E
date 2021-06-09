/*#include<iostream>
using namespace std;
int main()
{
 try{

  int a;
  int b;
  cout<<"enter the values of a and b\n";
   cin>>a>>b;
  float c;
  if(b==0)
   throw 'c';// throw 4.5
   c= a/b;
  cout<<c;
  int a1[2];
  int j;
  cout<<"enter the value of j\n";
  cin>>j;
 a1[j]=20;
  int k=a1[j];
  cout<<a1[j];
  if(j>2)
{
   throw j;
  cout<<"this line is not reached\n";
}
//  a1[j]=15;
  }



#include <iostream> 
using namespace std;

int main() { 
     int arr[] = {1,2,3,4,5};  
   cout<<"The elements of array : "; 
   for(int i = 0; i<=6; i++)
   {
          cout<<arr[i]<<"\n";
    }
   return 0; 
}
*/

#include <iostream>
using namespace std;
 
int main()
{
   int x = 2;
 
   // Some code
   cout << "Before try \n";
   try {
      cout << "Inside try \n";
      if (x < 0)
      {
         throw x;
         cout << "After throw (Never executed) \n";
      }
   }
   catch (int x )
   {
      cout << "Exception Caught \n";
   }
   cout << "After catch (Will be executed) \n";
   return 0;
}


/*
#include <iostream>
#include <exception>
using namespace std;
 
class newException : public exception
{
	virtual const char* what() const throw()
	{
		return "newException occurred";
	}
} newex;
 
int main() {
 
	try {
		throw newex;
		}
	catch (exception& ex) {
		cout << ex.what() << '\n';
	}
	return 0;	
}*/
