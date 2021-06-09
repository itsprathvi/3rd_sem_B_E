#include<iostream>
#include<string>
using namespace std;
class student
{
	int s_id;
	string s_name;
	string s_branch;
	string s_college;
public:
	void read(int ,string ,string ,string);
	void display();
};
void student::read(int x,string y,string z,string r)
{
	s_id=x;
	s_name=y;
	s_branch=z;
	s_college=r;
}

void student::display()
{
	cout<<"\n ID of the Student  : "<<this->s_id;
	cout<<"\n Name of the Student  : "<<this->s_name<<endl;
	cout<<" Branch of the Student : "<<this->s_branch<<endl;
	cout<<" Name of the college   :"<<this->s_college<<endl;	
}

int main()
{
	student a[5];
	int x,i;
	string y,z,r;//Pradeep was here
	cout<<"Student Details"<<i+1<<":"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Give the Details of the student"<<i+1<<":"<<endl;
		cout<<"Enter the Id of the student:"<<endl;
		cin>>x;
		cout<<"Enter the Name of the student:"<<endl;
		cin>>y;
		cout<<"Enter the Branch of the student:"<<endl;
		cin>>z;
		cout<<"Enter the Name of the college:"<<endl;
		cin>>r;
		a[i].read(x,y,z,r);
		
	}
	for(i=0;i<5;i++)
	{
		
		cout<<"The Detail of student"<<i+1<<":"<<endl;
		a[i].display();
	}
	return 0;
}
	 
