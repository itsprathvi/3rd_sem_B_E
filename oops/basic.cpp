#include<iostream>
using namespace std;
int main()
{
	int i=9;int &j=i;
	const int &q=5;
	const int &p=j+q;
	int c=10;
	int &k=c;
	int *ptr=&c;

	cout<<&c<<endl;
	cout<<&k<<endl;
	cout<<ptr<<endl;
	cout<<&ptr<<endl;
	cout<<&p<<endl;

	cout<<*ptr<<endl;
	cout<<i<<endl;
	cout<<j<<endl;
	cout<<q<<endl;
	cout<<p<<endl;
	cout<<k<<endl;
}