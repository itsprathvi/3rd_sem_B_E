#include<iostream>
using namespace std;

class person
{
protected:
	string name;
	int age;
public:
	void getdata(string a,int b)
	{
		name=a;
		age=b;
	}
	string setname()
	{
		return name;
	}
	int setage()
	{
		return age;
	}
};

class student : virtual protected person
{
protected:
	string usn;

public:
	 void getusn(string r)
	 {
	 	usn=r;
	 }

	 string setusn()
	 {
	 	return usn;
	 }
};

class faculty : virtual protected person
{
protected:
	 int id;
public:
	 void getid(int s)
	 {
	 	id=s;
	 }

	 int setid()
	 {
		return id;
	 }
};

class TA :protected student,protected faculty
{
protected:
	string course;
public:
	void getcourse(string t)
	{
		course=t;
	}
	string setcourse()
	{
		return course;
	}
};

int main()
{
	TA d;
	d.getdata("Prathviraj Prabhu",19);
	d.getusn("1BM19IS118");
	d.getid(11882299);
	d.getcourse("maths");
	cout<<"NAME : "<<d.setname()<<endl;
	cout<<"AGE : " <<d.setage()<<endl;
	cout<<"USN : "<<d.setusn()<<endl;
	cout<<"ID : "<<d.setid()<<endl;
	cout<<"COURSE : "<<d.setcourse()<<endl;
	return 0;
	
}
	

