/*#include<iostream>
using namespace std;

template <class T>
void largest(T a[],int &n,T& lar)
{
	for(int i=1;i<n;i++)
	{
		if(a[i]>lar)
		{
			lar=a[i];
		}
	}
	cout<<"The Largest number in the Array : "<<lar<<endl;
}


int main()
{
	int a[5]={10,20,30,40,50};
	int lar=a[0];
	int n=sizeof(a)/sizeof(a[0]);
	largest(a,n,lar);
	

	float b[6]={10.6,10.8,11,12.8,12.1,12.9};
	float lar1=b[0];
	int m=sizeof(b)/sizeof(b[0]);
	largest(b,m,lar1);
	return 0;
}*/

#include<iostream>
using namespace std;


template <class T>
T add(T& a,T& b)
{
	T result=a+b;
	return result;
}

int main()
{
	int n,m;
	float i,j;
	cout<<"Enter the First Number : ";
	cin>>n;
	cout<<"Enter the Second Number : ";
	cin>>m;
	cout<<"SUM : "<<add(n,m)<<endl;

	
	cout<<"Enter the First Number : ";
	cin>>i;
	cout<<"Enter the Second Number : ";
	cin>>j;
	cout<<"SUM : "<<add(i,j)<<endl;
	return 0;
}