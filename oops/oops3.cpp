#include <iostream>
using namespace std;
class details
{
private:
	int usn;
	char name[100];
	char gmail[100];
public:
void read()
{
cout<<"GIVE THE STUDENT DETAILS"<<endl;
cout<<"Enter the USN"<<endl;
cin>>usn;
cout<<"Enter the Name"<<endl;
cin>>name;
cout<<"Enter the gmail"<<endl;
cin>>gmail;
}
void display()
{
cout<<"STUDENT DETAIL"<<endl;
cout<<"Name : "<<name<<endl<<"USN : "<<usn<<endl<<"E-mail : "<<gmail<<endl;
}
};
int main()
{
	details d,v;
	v.read();
	d.read();
	d.display();
	v.display();
}
