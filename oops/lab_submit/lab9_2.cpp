
#include<iostream>
using namespace std;

class person
{
	string name;
	int age;
public:
	void getdata(string p,int q)
	{
		name=p;
		age=q;
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

class student : virtual public person
{
	 public:
	 string usn;
	 void getusn(string r)
	 {
	 	usn=r;
	 }
	 string setusn()
	 {
	 	return usn;
	 }
};

class faculty : virtual public person
{
	 public:
	 int id;
	 void getid(int s)
	 {
	 	id=s;
	 }
	 int setid()
	 {
		return id;
	 }
};

class TA :public student,public faculty
{
	public:
	string course;
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
	d.getdata("prathvi",10);
	d.getusn("1bm191s118");
	d.getid(109);
	d.getcourse("maths");
	cout<<d.setname();
	cout<<d.setage();
	cout<<d.setusn();
	cout<<d.setid();
	cout<<d.setcourse();
	return 0;
	
}
	

