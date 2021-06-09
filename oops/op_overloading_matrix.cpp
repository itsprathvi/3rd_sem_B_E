//Program to add and subtract two matrices . matrices are created dynamically overloading << and >> operators

#include<iostream>
using namespace std;
class mat
{
int m,n;//rows and cols
int **a;// pointer for 2d array
public:
mat()
{
m=2;
n=2;
a= new int*[m];
for(int i=0;i<m;i++)
a[i]=new int(n);
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
{
a[i][j]=0;
}
}
mat(int r,int c)
{
m=r;
n=c;

a= new int*[m];
for(int i=0;i<m;i++)
a[i]=new int [n];
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
{
a[i][j]=0;
}
}
friend istream& operator>>(istream &input,mat &m);//input
friend ostream& operator<<(ostream &output,const mat &m); //output
mat add(mat mat1);//member function // mat operator+(mat mat1)
mat sub(mat mat1);// mat operator-(mat mat1)
friend mat add(mat mat1,mat mat2); //friend mat operator+(mat mat1, mat mat2);
};
istream& operator>>(istream &input,mat &m1)
{
for(int i=0;i<m1.m;i++)
for(int j=0;j<m1.n;j++)
{
input>>m1.a[i][j];
}
}
ostream& operator<<(ostream &output,const mat &m1)
{
for(int i=0;i<m1.m;i++)
{
for(int j=0;j<m1.n;j++)
{
cout<<m1.a[i][j]<<"\t";
}
cout<<"\n";
}
}
mat mat::add(mat mat1) // mat mat::operator+(mat mat1)
{
mat res(m,n);
// res.m=m;
// res.n=n;
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
{
	res.a[i][j]=a[i][j]+mat1.a[i][j];
}
return(res);
}
mat mat::sub(mat mat1) // mat mat::operator-(mat mat1)
{
mat res(m,n);
// res.m=m;

// res.n=n;
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
{
res.a[i][j]=a[i][j] - mat1.a[i][j];
}
return(res);
}
mat add(mat a, mat b) // mat operator +(mat a,mat b)
{
mat c(a.m,a.n);
for(int i=0; i<a.m; i++)
{
for(int j=0; j<a.n ; j++)
{
c.a[i][j] = a.a[i][j] + b.a[i][j];
}
}
return c;
}
int main()
{
int r,c;
cout<<"enter the row and column\n";
cin>>r>>c;
mat m1(r,c);//paramertized and dynamic initializing aswell as dynamic constructor
mat m2(r,c);
mat m3(r,c);
cout<<m1;
cout<<m2;
cout<<"enter the matrix1 elements\n";
cin>>m1;//m1.read();
cout<<"enter the matrix2 elements\n";
cin>>m2;
m3=m1.add(m2); //m3=m1+m2;
cout<<"matrix are \n";
cout<<m1;
couta<<"matrix are \n";
cout<<m2;
cout<<"resultant matrix is\n";
cout<<m3;
m3=add(m1,m2); //m3=m1+m2
cout<<"resultant matrix is\n";
cout<<m3;
cout<<"resultant matrix after subtraction is\n";
m3=m1.sub(m2); //m3=m1-m2
cout<<m3;
}
