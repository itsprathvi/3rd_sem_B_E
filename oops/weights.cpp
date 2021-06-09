#include<iostream>
using namespace std;
struct weight
{
	int kg;
	int gram;
public :
	void read(int x,int y)
	{
		this->kg=x;
		this->kg+=y/1000;
		this->gram=y%1000;
	}
	void display()
	{
		cout<<this->kg<<"kg\t"<<this->gram<<"grams"<<endl;
	}
	void add(weight &x,weight &y)
	{
		this->kg = x.kg+y.kg;
		this->gram = x.gram+y.gram;
	}
};

int main()
{
weight a,b,c;
int i,j;
cout<<"Enter the weight of one person in Kg and grams \n"<<endl;
cin>>i>>j;
a.read(i,j);
cout<<"Enter the weight of second person in Kg and grams \n"<<endl;
cin>>i>>j;
b.read(i,j);
c.add(a,b);
c.display();
return 0;
}


