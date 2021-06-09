#include<iostream>
using namespace std;

class matrix
{
	int n,m;
	int a[10][10];
public:
	void read()
	{
		int i,j;
		cout<<"Enter the no of rows:"<<endl;
		cin>>n;
		cout<<"Enter the no of column:"<<endl;
		cin>>m;
		cout<<"Enter the Elements"<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}	
	}
	void display()
	{
		cout<<"MATRIX"<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}	
	}
	friend void transpose(matrix);
};

void transpose(matrix d)
{
	cout<<"TRANSPOSE OF MATRIX"<<endl;
	for(int i=0;i<d.m;i++)
	{
		for(int j=0;j<d.n;j++)
		{
			cout<<d.a[j][i]<<" ";		
		}
		cout<<endl;
	}	
}

int main()
{
	matrix d;
	d.read();
	d.display();
	transpose(d);
}
