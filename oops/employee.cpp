#include<iostream>
using namespace std;
class employee
{
	char name[100];
	int id;
	int salary;
public:
	void read();
	void display();
};

void employee::read()
{
	cout<<"ENTER THE DETAILS OF EMPLOYEE"<<endl;
	cout<<"Enter the name:"<<endl;
	cin>>name;
	cout<<"Enter the id"<<endl;
	cin>>id;
	cout<<"Enter the Salary"<<endl;
	cin>>salary;
}
void employee::display()
{
	cout<<name<<endl<<id<<endl<<salary<<endl;

}

int main()
{
	employee d;
	int n;
	cout<<"Total Number of Employee : ";
	cin>>n;
	int i;
	for(i=1;i<=n;i++)
	{
		cout<<"Enter the details of the employee "<<i<<endl;
		d.read();
	}
	cout<<endl;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"Details of Employee "<<i<<endl;
		d.display();	
	}
	
	return 0;
}










