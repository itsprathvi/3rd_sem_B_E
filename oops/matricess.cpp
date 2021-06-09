#include<iostream>
using namespace std;

class mat
{
int m,n;
int **a;
public:
	mat()
	{
		m=2;
		n=2;
		a=new int*[m];
		for(int i=0;i<n;i++)
		{
			a[i]=new int [n];
			for(int j=0;j<m;j++)
			{
				a[i][j]=0;
			}
		}
	}
	mat(int a,int b)
	{
		m=a;
		n=b;
		a=new int*[m];
		for(int i=0;i<n;i++)
		{
			a[i]=new int [n];
			for(int j=0;j<m;j++)
			{
				a[i][j]=0;
			}
		}
	}
	void read();
	void display();
	friend istream& operator>>(istream& input,mat &m);
	friend ostream& operator<<(ostream& output,mat &m);
	void operator *(mat &m,mat &n);
	void operator *(int a,mat &b);
};


void mat::read()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
}

void mat::display()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	
}

istream& operator>>(istream& input,mat &m1)
{
	for(int i=0;i<m1.m;i++)
	{
		for(int j=0;j<m1.n;j++)
		{
			input>>m1.a[i][j];
		}
	}
	return input;
}

ostream& operator<<(ostream& output,mat &m1)
{
	for(int i=0;i<m1.m;i++)
	{
		for(int j=0;j<m1.n;j++)
		{
			output<<m1.a[i][j]<<" ";
		}
		cout<<endl;
	}
	return output;
}

void mat::operator *(mat &m1,mat &n1)
{
	mat res(m1.m,n1.n);
	for(int i=0;i<m1.m;i++)
	{
		for(int j=0;j<n1.n;j++)
		{
			res.a[i][j]=0;
			for(int k=0;k<m1.n;k++)
			{
				res.a[i][j]+=m1.a[i][k]*n1.a[k][j];
			}
		}
	}
}

void mat::operator *(int a,mat &b)
{
	mat res(b.m,b.n);
	for(int i=0;i<b.m;i++)
	{
		for(int j=0;j<b.n;j++)
		{
			res.a[i][j]=a*b.a[i][j];
		}
	}
}

int main()
{
int m,n,m1,m2,k;
printf("Enter the Number of matrix 1 Rows and Column\n");
cin>>m>>n;
mat mat1(m,n);
cin>>mat1;
printf("Enter the Number of Matrix 2 Rows and Column\n");
cin>>m1>>n1;
mat mat2(m1,n1);
cin>>mat2;
cout<<"A:\n"<<mat1<<endl;
cout<<"B:\n"<<mat2<<endl;
printf("Enter the Scalar Multiplier\n");
cin>>k;
mat mat3=mat1*mat2;
mat mat4=k*mat2;
cout<<k<<"*B:\n"<<mat4<<endl;
return 0;
}





	



	
	
	
	
	
	
	
	
	
	
	
