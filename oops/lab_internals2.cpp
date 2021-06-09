/*Assume that the test results of a batch of students are stored in three different classes. Class
“Student” stores the role-no, class “test” scores the marks obtained in two subjects and class
“result” contains the total marks obtained in the test. Illustrate how multilevel inheritance works
for these classes.*/

#include<iostream>
using namespace std;

class student
{
protected:
	int roll_no;
public:
	void read(int x)
	{
		roll_no = x;
	}
	void resu()
	{
		cout<<"Display in BASE Class\n";
	}
	
};

class test : public student
{
protected:
	int sub1,sub2;
public:
	void read1(int y,int z)
	{
		sub1=y;
		sub2=z;
	}
	void resu()
	{
		cout<<"Display in derived Class\n";
	}
};

class result : public test
{
protected:
	int res;
public:
	void resu()
	{
		res = sub1+sub2;
		cout<<"In Result Derived Class\n";
		cout<<"Total Marks obtained by the student "<<roll_no<<" in two Subjects : "<<res<<endl;
	}
};

int main()
{
	int k,n,m,o;
	
	cout<<"Enter the total Number of Student : ";
	cin>>k;
    result a[k];
	for(int i=0;i<k;i++)
	{
		cout<<"Enter the Roll No of the Student : ";
		cin>>n;
		a[i].read(n);
		cout<<"Enter the Marks obtained "<<endl;
		cout<<"Subject 1 : ";
		cin>>m;
		cout<<"Subject 2 : ";
		cin>>o;
		a[i].read1(m,o);
		
	}
    for(int i=0;i<k;i++)
    {
        a[i].resu();
    }

}