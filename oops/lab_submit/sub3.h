#include<iostream>
using namespace std;

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