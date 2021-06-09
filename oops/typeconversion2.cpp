/* Program to demonstrate Class type to Basic type conversion. */

/* #include <iostream>
using namespace std;
class Time
{
	int hrs,min;
	public:
		Time(int ,int);   // constructor
		operator int();   // casting operator function
		~Time()          // destructor
		{
			cout<<"Destructor called..."<<endl;
		}
};
Time::Time(int a,int b)
{
	cout<<"Constructor called with two parameters..."<<endl;
	hrs=a;
	min=b;
}

Time :: operator int()
{
	cout<<"Class Type to Basic Type Conversion..."<<endl;
	return(hrs*60+min);
}

int main()
{
	
	int h,m,duration;
	cout<<"Enter Hours ";
        cin>>h;
	cout<<"Enter Minutes ";
        cin>>m;
	Time t(h,m);       // construct object
	duration = t;      // casting conversion OR duration = (int)t
	cout<<"Total Minutes are "<<duration<<endl;
	cout<<"2nd method operator overloading "<<endl;
	duration = t.operator int();
	cout<<"Total Minutes are "<<duration;
	return(0);
}
*/

// Program to convert one class to another class 
#include <iostream>
using namespace std;
class inventory1
{
	int ino,qty;
	float rate;
	public:
		inventory1(int n,int q,float r)
		{
			ino=n;
			qty=q;
			rate=r;
		}
		inventory1()
		{
			cout<<"\n Inventory1's Object Created";
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
			cout<<endl<<"ino = "<<ino<<" qty = "<<qty<<" rate = "<<rate;
		}
};
class inventory2
{
	int ino;
	float amount;
	public:
	
	void operator=(inventory1 I)
	{
		ino=I.getino();
		amount=I.getamt();
	}
	void display()
	{
		cout<<endl<<"ino = "<<ino<<" amount = "<<amount;
	}
};
int main()
{
	//clrscr();
	inventory1 I1(1001,30,75);
	inventory2 I2;
	I2=I1;
	//inventory2 I2=I1;
	I1.display();
	I2.display();
	//getch();
return(0);
} 
/*
// Program to convert class Time to another class Minute. 

#include <iostream>
//#include "conio.h"
//#include "iomanip.h"
using namespace std;
class Time
{
	int hrs,min;
	public:
		Time()
		{
			cout<<"\n Time's Object Created";
		}
		Time(int h,int m)
		{
			hrs=h;
			min=m;
		}
		
																/*	int getMinutes()
																	{
																		int tot_min = ( hrs * 60 ) + min ;
															                        return tot_min;
																	}
        int gethour()
        {
          return(hrs);
        }
        int getmin()
        {
          return(min);
        }
		void display()
		{
			cout<<"Hours: "<<hrs<<endl ;
            cout<<" Minutes : "<<min <<endl ;
		}
};
class Minute
{
	int min;
	public:

	void operator=(Time T)
	{
		//min=T.getMinutes();
	   int h=T.gethour();
	   int m=T.getmin();  
	   min = ( h * 60 ) + m ;
	}
	void display()
	{
		cout<<"\n Total Minutes : " <<min<<endl;
	}
};
int main()
{
//	clrscr();
	Time t1(2,30);
	Minute m1;
	m1 = t1;  // conversion from Time to Minute m1.operator=(t1)
	t1.display();
    m1.display();
        
	
	Time t2(4,5);
	m1=t2;
    t2.display();
	m1.display();
//	getch();
        return(0);
}
*/