/* Program to demonstrate exception
#include<iostream>
using namespace std;
int main()
{	
 
  int a=4;
  int b;
  cout<<"enter the value of b\n";
  cin>>b;
  int c= a/b;
  cout<<c;
}


//program to demonstrate try catch
#include<iostream>
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
catch(...)
{
  cout<<"denominator should not be zero \n";
}
cout<<"this is after catch\n";
}


//Program to demonstrate throw and catch all 
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
  cout<<c<<endl;
  }
 catch(...)
 {
  cout<<"divide by zero error\n";
}
}

//Program to demonstrate throw and catch 

#include<iostream>
using namespace std;
int main()
{
 try
 {
  int a=4;
  int b=5;
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


//Program to illustrate multiple catch
#include<iostream>
using namespace std;
int main()
{
 try{

  int a=4;
  int b=2;
  float c;
  if(b==0)
   throw 'c';// throw c
   c= a/b;
 	cout<<c;
  //throw 2;
  throw 4.5;
  }
 catch(char i) //catch(float f)
 {
  cout<<"denomiantor should not be  zero its an error\n";
}
  catch(float i)
  {
   cout<<"user exception handler for float\n";
  }
 catch(...)
 {
  cout<<"generic exception handler\n";
}
}
*/

//Program to illustrate multiple catch

#include<iostream>
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
	if(j>2)
	{
	  throw j;
	  cout<<"this line is not reached\n";
	}
	  a1[j]=20;
	  int k=a1[j];
	  cout<<a1[j];
	 
	//  a1[j]=15;
	}
	catch(int i) //catch(float f)
	{
	  cout<<"array out of bounds error\n";
	}
	catch(char c)
	{
	  cout<<"denominator can not be zero\n";
	}
	catch(...)
	{
	 cout<<"genral exception caught\n";
	}
 
}

/*
// wrong output
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


//Program to illustrate class and exceptions
#include <iostream> 
using namespace std;
class student{
int usn;
int age;
public:
   void read()
   {
    cin>>usn>>age;
    
         if(age<18)
         throw 4;
   }
  void display()
  {
    cout<<"usn= "<<usn<<"age= "<<age<<"\n";
  }
};
int main() { 
   student s;
   try{
  s.read();
  s.display();
  }
  catch(int i)
  {
    cout<<"not eligible for voting\n";
   }
   return(0);
}


//Program

#include <iostream>
using namespace std;
int main()
{
   int x = -1;
 
   // Some code
   cout << "Before try \n";
   try
   {
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


//Program with datatype does not match

#include <iostream>
using namespace std;
 
int main()
{
    try  {
       throw 'a';
    }
    catch (char x)  //get core dump, use char
    {
        cout << "Caught ";
    }
    return 0;
}

//Program with class and exception
#include <iostream>
using namespace std;
 
class Test {
public:
    Test() { cout << "Constructor of Test " << endl; }
    ~Test() { cout << "Destructor of Test " << endl; }
};
 
int main()
{
    try {
        Test t1;
        throw 10;
    }
    catch (int i) {
        cout << "Caught " << i << endl;
    }
}

//Exception
//Exception
//Exception
//Exception
//Exception
//Exception
//User defined exception
#include <iostream>  
#include <exception>  
using namespace std;  
class MyException : public exception{  
    public:  
        const char * what()   
        {  
            return "Invalid input!\n";  
        }  
};  
class student 
{
   int usn;
   int marks;
   int age;
    public: 
     student()
     {
       cin>>usn>>age>>marks;

        MyException e;
       if(age<18)
       throw e;
       if(marks>100)
       throw e;
     }
};
int main()  
{  
    try  
    {  
        student s1;
        
    }  
    catch(MyException& e)  
    {  
        cout << e.what();  
    }  
}


//Program to throw object 
#include <iostream>  
#include <exception>  
using namespace std;  
class ex{  
    public:  
        ex()
        {
        	cout<<"constructor\n";
        }
    
};

int main()  
{  
    try  
    {  
        int x, y;  
        cout << "Enter the two numbers : \n";  
        cin >> x >> y;  
        if (y == 0)  
        {  
            ex e;  
            throw e;  
        }  
        else  
        {  
            cout << "x / y = " << x/y << endl;  
        }  
    }  
    catch(ex e1)  
    {  
        cout << "in catch handler\n";  
    }  
}  

// Array out of bound exception
#include <iostream> 
using namespace std;

int main() 
{ 
   try{

   int arr[] = {1,2,3,4,5};  
   cout<<"The elements of array : "; 
   for(int i = 0; i<=6; i++)
   {
      if(i>=5)
       throw i; 
      cout<<arr[i]<<"\n";
    }
   }
   catch(int c)
   {
     cout<<"array out of bound\n";
   }
   return 0; 
}

//Rethrow
#include <iostream>
using namespace std;
 
// Here we specify the exceptions that this function 
// throws.
void fun(int *ptr, int x) 
{
    if (ptr == NULL)
        throw ptr;
    if (x == 0)
        throw x;
    //Some functionality 
}
 
int main()
{
    try
    {
       fun(NULL, 0);
    }
    catch(...)
    {
        cout << "Caught exception from fun()";
    }
    return 0;
}


//Program 3

#include<iostream>
using namespace std;
int main()
{
    try 
    {
        try 
        {
            throw 20;
        }
        catch (int n) 
        {
            cout << "Handle Partially ";
            throw 10; // Re-throwing an exception
        }
    }
    catch (int n) 
    {
        cout << "Handle remaining ";
    }
    return 0;
}


//Program 3

#include <iostream>
using namespace std;
 
class Test {
public:
    Test() { cout << "Constructor of Test " << endl; }
    ~Test() { cout << "Destructor of Test " << endl; }
};
 
int main()
{
    try {
        Test t1;
        throw 10;
    }
    catch (int i) {
        cout << "Caught " << i << endl;
    }
}



//User defined exceptions
#include <iostream>  
#include <exception>  
using namespace std;  
class MyException : public exception{  
    public:  
        virtual const char * what() const throw()  
        {  
            return "Attempted to divide by zero!\n";  
        }  
};  
int main()  
{  
    try  
    {  
        int x, y;  
        cout << "Enter the two numbers : \n";  
        cin >> x >> y;  
        if (y == 0)  
        {  
            MyException z;  
            throw z;  
        }  
        else  
        {  
            cout << "x / y = " << x/y << endl;  
        }  
    }  
    catch(MyException& z)  
    {  
        cout << z.what();  
    }  
}  


//Program 4
#include<iostream>
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
 
int main() 
{
  try {
    throw newex;
    }
  catch (exception& ex)
  {
    cout << ex.what() << '\n';
  }
  return 0; 
}*/



























