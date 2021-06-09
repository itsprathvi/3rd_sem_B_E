#include<iostream>
#include<string.h>
using namespace std;
/*
class newa
{
	int len;
	char *name;
public:
	newa()
	{
		len=0;
		name= new char[len+1]; 
	}
	void getdata()
	{
		char *s;
		s= new char[10];
		cout<<"Enter the Name \n";
		cin>>s;
		len=strlen(s);
		name= new char[len+1];
		strcpy(name,s);
	}
	void display()
	{
		cout<<"Name : "<<name<<endl;
	}
};

int main()
{
	newa *ptr[10];
	for(int i=0;i<5;i++)
	{
		ptr[i]= new newa();
		ptr[i]->getdata();
	}
	for(int i=0;i<5;i++)
	{
		ptr[i]->display();
	}
}*/
/*
const int MAX=4;
int main()
{
	const char * name[MAX]={"bangalore","mangalore","udupi","sagri"};
	for(int i=0;i<MAX;i++)
	{
		cout<<"Adress of the Name ";
		cout<<(name+i)<<endl;
	}
	for(int i=0;i<MAX;i++)
	{
		cout<<"Content of the Name ";
		cout<<*(name+i)<<endl;
	}
	return 0;
}*/


/*
class Time
{
	int hrs;
	int min;
public:
	void operator=(int);
	void display();
};

void Time :: operator=(int t)
{
	hrs=t/60;
	min=t%60;
}

void Time :: display()
{
	cout<<hrs<<":hrs"<<endl;
	cout<<min<<":Minute"<<endl;
}

int main()
{
	int duration;
	cout<<"Enter the time : "<<endl;
	cin>>duration;
	Time t1=duration;;
	//t1=duration;//Time t1(duration);
	t1.display();
	t1.operator=(duration);
	t1.display();
	return 0;
}*/


/*class Time
{
	int ino;
	int qty;
	float rate;
public:
	Time(int a,int b,float c)
	{
		ino=a;
		qty=b;
		rate=c;
	}
	int getino()
	{
		return(ino);
	}
	float getamt()
	{
		return(qty*rate);
	}
	void display()
	{
		cout<<"Income : "<<ino<<endl<<"Quantity : "<<qty<<endl<<"Rate : "<<rate<<endl;
	}
};

class Time2
{
	float amount;
	int income;

public:
	void operator=(Time t)
	{
		amount=t.getamt();
		income=t.getino();
	}
	void display()
	{
		cout<<"Amount : "<<amount<<endl<<"Income : "<<income<<endl;
	}
};


int  main()
{
	int a,b;
	float c;
	cout<<"Enter Income,Quantity,Rate : ";
	cin>>a>>b>>c;
	Time t1(a,b,c);
	Time2 t2;
	t2=t1;
	t1.display();
	t2.display();
	return 0;
}*/

/*class Time
{
	int hrs;
	int min;
public:
	Time(int a,int b)
	{
		hrs=a;
		min=b;
	}
	int gethrs()
	{
		return(hrs);
	}
	int getmin()
	{
		return(min);
	}
	void display()
	{
		cout<<"Hours : "<<hrs<<endl<<"Minutes : "<<min<<endl;
	}
};

class minute
{
	int hour;
	int minute;
	int tt;
public:
	void operator =(Time t)
	{
		hour=t.gethrs();
		minute=t.getmin();
		tt=(hour*60)+minute;
	}
	void display()
	{
		cout<<"Total Time : "<<tt<<endl;
	}
};

int main()
{
	/*int a,b;
	cout<<"Enter time in Hours and Minutes : "<<endl;
	cin>>a>>b;*/
/*
	Time t1(3,45);
	minute m1;
	m1=t1;
	t1.display();
	m1.display();

	Time t2(2,30);
	m1=t2;
	t2.display();
	m1.display();
	return 0;
}


template <class T>
T largest(T a[],int n,T &lar)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>lar)
		{
			lar=a[i];
		}
	}
	return(lar);
}

int main()
{
	int a[5]={10,20,30,40,50};
	int n = sizeof(a)/sizeof(a[0]);
	int lar=0;
	int big=largest(a,n,lar);
	cout<<"The Largest Element in the Array : "<<big<<endl;
	float b[5]={10.1,20.2,30.3,40.4,50.5};
	float lar1=0;
	cout<<"The Largest Element in the Array : "<<largest(b,n,lar1);
	return 0;
}
template<class T>
void fun(T x)
{
	cout<<"The numbers are : "<<x<<endl;
}
template <class T,class V>
void fun(T x, V y)
{
	cout<<"The Numbers are : "<<x<<y<<endl; 
}

int main()
{
	fun(10);
	fun(10.5,'a');
	return 0;
}

template <class T>
void fun(T a[],int n)
{
	for(int i=0;i < n-1;i++)
	{
		for(int j=n-1;i<j;j--)
		{
			if(a[j]<a[j-1])
			{
				swap(a[j],a[j-1]);
			}
		}
	}
}

int main()
{
	int a[5]={5,500,230,3,450};
	int n = sizeof(a)/sizeof(a[0]);
	fun<int>(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;

} 

template <typename T>
class Array
{
	T *ptr;
	int size;
public:
	Array(T a[],int s);
	void print();
};

template <typename T>
Array<T>::Array(T a[], int s)
{
	ptr=new T[s];
	size=s;
	for(int i=0;i<size;i++)
		ptr[i]=a[i];
}

template <typename T>
void Array<T>::print()
{
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int a[5]={10,20,30,40,50};
	Array<int> d(a,5);
	d.print();
	float b[5]={10.1,20.2,30.3,40.4,50.5};
	Array<float> c(b,5);
	c.print();
}

template <typename T>
class A
{
	T num1;
	T num2;
public:
	A()
	{
		num1=0;
		num2=0;
	}
	A(T x,T y)
	{
		num1=x;
		num2=y;
	}
	void add()
	{
		cout<<"Addition of two Number : "<<num1+num2<<endl;
	}
};

int main()
{
	A<int> d(10,20);
	d.add();
	A<float> c(10.456,20.678);
	c.add();
	return 0;
}
template <typename T>
class Stack
{
public:
	Stack();
	void push(T i);
	T pop();
private:
	T st[100];
	int top;
};

template <typename T>
Stack<T>::Stack()
{
	top = -1;
}

template <typename T>
void Stack<T>::push(T i)
{
	st[++top] = i;
}

template <typename T>
T Stack<T>::pop()
{
	return(st[top--]);
}

int main()
{
	Stack<int> d;
	Stack<string> b;

	d.push(10);
	b.push("hello");
	d.push(12);
	cout<<d.pop()<<endl;
	cout<<b.pop()<<endl;
	cout<<d.pop()<<endl;
}

int main()
{
	int a=5;
	int b;
	float c;
	cout<<"Enter the value of b : ";
	cin>>b;
	try
	{
		if(b!=0)
		{
			c=a/b;
			cout<<"Value of C : "<<c<<endl;
		}
		else
		{
			cout<<"Control reached the limit\n";
			throw c;
			cout<<"This message not displayed\n";
		}
	cout<<"this message outside the scope\n";
	}
	catch(...)
	{
		cout<<"Denominator should not be Zero\n";
	}
	cout<<"Out of scope\n";
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
  cout<<c;
  }
 catch(...)
 {
  cout<<"divide by zero error\n";
}
}

#include<iostream>
using namespace std;
class student
{
	int age;
	int num;
	public:
	void read()
	{
		cin>>age>>num;
		if(age < 18)
		{
			throw 0;
		}
	}
	void display()
	{
		cout<<"Number : "<<num<<endl<<"AGE : "<<age<<endl;
	}
};

int main()
{
	student s;
	try
	{
		s.read();
		s.display();
	}
	catch(int i)
	{
		cout<<"Not eligible for vote\n";
	}
	catch(...)
	{
		cout<<"general exception Handler\n";
	}
	return 0;
}


#include<iostream>
using namespace std;
class ex
{
public:
	ex()
	{
		cout<<"moojikaas\n";
	}
};

int main()
{
	try
	{
		int x,y;
		cout<<"Enter value of A and B : ";
		cin>>x>>y;
		if(y == 0)
		{
			ex e;
			throw y;
		}
		else
		{
			cout<<"x/y = "<<x/y<<endl;
		}
	}
	catch(ex e1)
	{
		cout<<"exception Handler\n";
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
    // Some functionality 
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
*/

