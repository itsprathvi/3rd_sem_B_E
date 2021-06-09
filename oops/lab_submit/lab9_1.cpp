/* Imagine a publishing company that markets both book and audio cassette versions of its work. Create a class publication that stores the title and price of a publication and member functions getdata() and displaydata(). From this class derive two classes: book which adds a page count and tape which adds a plain time in minutes. Write a main program to test the book and tape classes by creating instances of them */

#include<iostream>
using namespace std;

class publication
{
	char title[10];
	int price;
public:
	void getdata()
	{
		cout<<"Enter the title of the book : ";
		cin>>title;
		cout<<"\nenter the Price of the book : ";
		cin>>price;
	}
	void displaydata()
	{
		cout<<"\nDetails of the Book\n";
		cout<<"\nThe Name of the book : "<<title;
		cout<<"\nPrice : "<<price;
		//cout<<"\nPages: "<<p;
		//cout<<"\nTime in minutes : "<<z;
	}
};

class book : public publication
{
public:
	int p;
	
	void getpagecount()
	{
		cout<<"\nEnter the no of Pages:";
		cin>>p;
	}
	void pagecount()
	{
		cout<<"\nPages: "<<p;
	}
};
class tape : public book
{
public:
	int z;
	
	void getplaintime()
	{
		cout<<"\nEnter the time in minutes : ";
		cin>>z;
	}
	void plaintime()
	{
		cout<<"\nTime in minutes : "<<z;
	}
};

int main()
{
	tape d;
	d.getdata();
	d.getpagecount();
	d.getplaintime();
	
	d.displaydata();
	d.pagecount();
	d.plaintime();
	return 0;
}








