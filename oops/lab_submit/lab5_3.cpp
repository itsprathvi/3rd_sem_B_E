#include<iostream>
#include<cstring>
using namespace std;
class stringss
{
	char *name;
public:
	stringss()
	{
		name=new char[strlen("prathvi")];
		strcpy(name,"prathvi");
	}
	stringss(char *a)
	{
		name=new char[strlen(a)];
		strcpy(name,a);
	}
	void display()
	{
		cout<<"Name="<<name<<endl<<"Length="<<strlen(name)<<endl;
	}
};
int main()
{
	stringss x1;
	x1.display();
	stringss x2("prathvi");
	x2.display();
	char a[100];
	cout<<"Enter the name="<<endl;
	cin.getline(a,100);
	stringss x3(a);
	x3.display();
	return 0;
}
