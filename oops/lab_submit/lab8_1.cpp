#include<iostream>
using namespace std;

class persondata
{
string lastname,firstname,address,city,state;
int phone;
public:
	persondata()
	{
		lastname='c';
		firstname='b';
		address='a';
		city='y';
		state='x';
		phone=10;
	}
	void setLastname()
	{
		cout<<"Enter Last Name\n";
		cin>>lastname;
	}
	void setFirstname()
	{
		cout<<"Enter First Name\n";
		cin>>firstname;
	}
	void setAddress()
	{
		cout<<"Enter Address\n";
		cin>>address;
	}
	void setCity()
	{
		cout<<"Enter city\n";
		cin>>city;
	}
	void setState()
	{
		cout<<"Enter State\n";
		cin>>state;
	}
	void setPhone()
	{
		cout<<"Enter Phone Number\n";
		cin>>phone;
	}
	
	string getLastname()
	{
		return lastname;
	}
	string getFirstname()
	{
		return firstname;
	}
	string getAddress()
	{
		return address;
	}
	string getCity()
	{
		return city;
	}
	string getState()
	{
		return state;
	}
	int getPhone()
	{
		return phone;
	}
};
class customerData : public persondata
{
int custo_num;
string email;
public:
customerData(int p,string q):persondata()
{
	custo_num=p;
	email=q;
}
void setCusto_num()
{
	cout<<"Enter Customer Number: "<<endl;
	cin>>custo_num;
}
void setEmail()
{
	cout<<"Enter EMAIL: "<<endl;
	cin>>email;
}
int getCusto_num()
{
	
	return custo_num;
}
string getEmail()
{
	return email;
}
};

class prefferedCustomer: public customerData
{

    int discount;
    int total_amount;
    public:

    prefferedCustomer(int p,string q,int purchase):customerData(p,q)
    {
        total_amount=purchase;
    }

    void cal(){
        if(total_amount>=500 && total_amount<1000)
            discount=5;
        else if(total_amount>=1000 && total_amount<2000)
            discount=6;
        else if(total_amount>=2000)
            discount=10;
    }
    int getDiscount()
    {
        return discount;
    }
};


int main()
{
	int p,z;
	string q;
	persondata obj;

	cout<<"Enter customer number and email and purchase\n";
	cin>>p>>q>>z;
	prefferedCustomer obj1(p,q,z);
	obj1.setLastname();
	obj1.setFirstname();
	obj1.setAddress();
	obj1.setCity();
	obj1.setState();
	obj1.setPhone();
	
	cout<<"Details \n";
	cout<<obj1.getLastname()<<endl;
	cout<<obj1.getFirstname()<<endl;
	cout<<obj1.getAddress()<<endl;
	cout<<obj1.getCity()<<endl;
	cout<<obj1.getState()<<endl;
	cout<<obj1.getPhone()<<endl;
	cout<<obj1.getCusto_num()<<endl;
	cout<<obj1.getEmail()<<endl;
	
	//obj1.setCusto_num();
	//obj1.setEmail();
	obj1.cal();
	cout<<"Discount = "<<obj1.getDiscount()<<"%";
	return 0;
}











