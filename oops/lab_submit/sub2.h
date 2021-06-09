#include<iostream>
using namespace std;

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
