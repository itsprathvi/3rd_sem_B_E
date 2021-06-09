#include<iostream>
using namespace std;

class ship
{
protected:
	int year;
	string name;
public:
	ship(int yearr,string namee)
	{
		year=yearr;
		name=namee;
	}
	void set_name(string namee)
	{
		name=namee;
	}
	void set_year(int yearr)
	{
		year=yearr;
	}
	string get_name()
	{
		return(name);
	}
	int get_year()
	{
		return(year);
	}
	virtual void print()
	{
		cout<<"Name : "<<name<<endl<<"Year : "<<year<<endl;
	}
};

class cruiseship : public ship
{
protected:
	int capacity;
public:
	cruiseship(int capacityy,int yearr,string namee):ship(yearr,namee)
	{
		capacity=capacityy;
	}
	void set_capacity(int capacityy)
	{
		capacity=capacityy;
	}
	int get_capacity()
	{
		return(capacity);
	}
	void print()
	{
		cout<<"Name of the ship : "<<name<<endl<<"Capacity : "<<capacity<<endl;
	}
};

class cargoship : public ship
{
protected:
	int passanger;
public:
	cargoship(int passangerr,int yearr,string namee):ship(yearr,namee)
	{
		passanger=passangerr;
	}
	void set_cap(int passangerr)
	{
		passanger=passangerr;
	}
	int get_cap()
	{
		return(passanger);
	}
	void print()
	{
		cout<<"Name of the ship : "<<name<<endl<<"Capacity : "<<passanger<<endl;
	}
};

int main()
{
	ship *a[5];
	int m,y;
	string n;
	for(int i=0;i<2;i++)
	{
		cout<<"Enter the Maximum of capacity of passanger,year of manufacture,name of the ship : "<<endl;
		cin>>m>>y>>n;
		a[i]=new cargoship(m,y,n);
	}
	for(int i=2;i<5;i++)
	{
		cout<<"Enter the Maximum of capacity of passanger,year of manufacture,name of the ship : "<<endl;
		cin>>m>>y>>n;
		a[i]=new cruiseship(m,y,n);
	}
	for(int i=0;i<5;i++)
	{
		a[i]->print();
	}
}