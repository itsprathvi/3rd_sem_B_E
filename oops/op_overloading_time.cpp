/*C++ program to create class to read and add two times.*/


#include<iostream>
using namespace std;
class Time
{
private:
	int hours;
	int minutes;
	int seconds;
public:
Time()
{
	hours=0;
	minutes=0;
	seconds=0;
}
friend istream& operator>>(istream& input,Time &t);//input
friend ostream& operator<<(ostream& output,const Time &t); //output
friend Time operator +(Time T1,Time T2);
};
istream& operator>>(istream& input,Time &t)
{
	cout << "Enter time:" << endl;
	cout << "Hours?";
	input>>t.hours;
	cout << "Minutes?";
	input>>t.minutes;
	cout << "Seconds?";
	input>>t.seconds;
	return input;
}
ostream& operator<<(ostream &output,const Time &t)
{
output<<endl;
output<<"Time after add: ";
output<<t.hours<<":"<<t.minutes <<":"<<t.seconds<< endl;

return output;
}
Time operator +(Time T1,Time T2)
{
Time T3;
T3.seconds=T1.seconds+T2.seconds;
T3.minutes=T1.minutes+T2.minutes + (T3.seconds/60);
T3.hours= T1.hours+T2.hours + (T3.minutes/60);
T3.minutes %=60;
T3.seconds %=60;
return(T3);
}

int main()
{
Time T1,T2,T3;
cout<<"enter the values of Time1\n";
cin>>T1;
cout<<"enter the values of Time2\n";
cin>>T2;
cout<<"Entered Time Values are\n";
cout<<T1<<endl;
cout<<T2;
//T1.getTime();
//T2.getTime();
//add two times
T3=T1+T2;
cout<<"result of adding two time values are\n";
cout<<T3;
return 0;
}
