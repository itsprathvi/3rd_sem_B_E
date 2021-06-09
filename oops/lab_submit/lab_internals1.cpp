#include<iostream>
using namespace std;
#include "sub1.h"
#include "sub2.h"
#include "sub3.h"

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
	