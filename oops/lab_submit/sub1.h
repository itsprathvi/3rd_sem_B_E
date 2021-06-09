#include<iostream>
using namespace std;

class person
{
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