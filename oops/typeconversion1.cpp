/* Program to convert basic type to class type using constructor */
/*#include <iostream>
using namespace std;
class Time
{
	int hrs,min;
	public:
        Time(int);
		void display();
};

Time :: Time(int t)
{
	cout<<"Basic Type to ==> Class Type Conversion..."<<endl;
	hrs=t/60;
	min=t%60;
}

void Time::display()
{
	cout<<hrs<< ": Hours(s)" <<endl;
	cout<<min<< " Minutes" <<endl;
}

int main()
{
	//Time t2;	
	int duration;
	cout<<"Enter time duration in minutes"; 
        cin>>duration;
		Time t1=duration;//t1(duration);
        	t1.display();
                 //t2=duration//error
     return(0);
	}

*/

/* Program to convert from basic type to class type using operator overloading */

#include <iostream>
using namespace std;
class Time
{
	int hrs,min;
	public:
		void display();
		void operator=(int); // overloading function
};
void Time::display()
{
	cout<<hrs<< ": Hour(s) "<<endl ;
	cout<<min<<": Minutes"<<endl ;
}

void Time::operator=(int t)
{
	cout<<"Basic Type to ==> Class Type Conversion..."<<endl;
	hrs=t/60;
	min=t%60;
}

int main()
{
	//clrscr();
	Time t1;
	int duration;
	cout<<"Enter time duration in minutes";
        cin>>duration;
	cout<<"object t1 overloaded assignment..."<<endl;
	t1=duration;//t1.operator =(duration)
	t1.display();
	cout<<"object t1 assignment operator 2nd method..."<<endl;
	t1.operator=(duration);
	t1.display();
	//getch();
return(0);
}
