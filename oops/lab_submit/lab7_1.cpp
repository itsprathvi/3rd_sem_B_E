#include<iostream>
using namespace std;

class mat{
    int n,m;
    int **ptr;
    public:
      mat()
        {
            m=2;
            n=2;
            ptr = new int*[m];
            for(int i=0;i<m;i++)
            {
                ptr[i]=new int[n];
            }
            for(int i=0;i< m;i++)
            for(int j=0; j<n; j++)
            {
                ptr[i][j]=0;
            }
        }
        mat(int x, int y)
        {
            m=x;
            n=y;
            ptr = new int*[m];
            for(int i=0;i<m;i++)
                ptr[i]= new int[n];
            for(int i=0;i<m;i++)
            for(int j=0; j<n; j++)
                ptr[i][j]=0;
        } 

        void read();
        void display();
        friend mat operator*(int a, mat b);
        friend istream& operator>>(istream &input , mat &m);
        friend ostream& operator<<(ostream &output , mat &m);
        friend mat operator+(mat &m1, mat &m2);
        friend mat operator*(mat &m1, mat &m2);
};

void mat::read()
{
    for(int i=0;i < m;i++)
            for(int j=0; j<n; j++)
            {
                cout<<"Enter the "<<i<<" "<<j<<" :";
                cin>>ptr[i][j];
            }
}

void mat::display()
{
    for(int i=0;i < m;i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }
}
mat operator*(mat &m1, mat &m2)
{
    mat res(m1.m, m2.n);
    int i,j,k;
    for(i = 0; i < m1.m; i++)
        for(j = 0; j < m2.n; j++)
            res.ptr[i][j]=0;
            for(k = 0; k < m1.n; k++)
            {
                res.ptr[i][j] += m1.ptr[i][k] * m2.ptr[k][j];
            }
    return res;
}
mat operator*(int a, mat b)
{
    mat res(b.m, b.n);
    for(int i=0;i < b.m;i++)
    {
        for(int j=0; j<b.n; j++)
        {
            res.ptr[i][j]= a * b.ptr[i][j];
        }
        cout<<endl;
    }
    return res;
}

istream& operator>>(istream &input , mat &m)
{
    for(int i=0;i < m.m; i++)
            for(int j=0; j<m.n; j++)
            {
                cout<<"Enter the "<<i<<" "<<j<<" :";
                input>> m.ptr[i][j];
            }
        return input;
}

ostream& operator<<(ostream &output , mat &m)
{
    for(int i=0;i < m.m;i++)
    {
        for(int j=0; j<m.n; j++)
            output<<m.ptr[i][j]<<" ";
        output<<endl;
    }
    return output;
}

mat operator+(mat &m1, mat &m2)
{
    mat res(m1.m,m2.n);
    if(m1.m == m2.m && m1.n == m2.n)
    {
        for(int i=0;i < m1.m;i++)
        for(int j=0; j<m1.n; j++)
            res.ptr[i][j] = m1.ptr[i][j] + m2.ptr[i][j];
        return res;
    }
}

int main()
{
    int m,n, m2, n2;
    cout<<"Enter the number of rows and colm: ";
    cin>>m>>n;
    mat a(m,n);
    cin>>a;
    cout<<"Enter the number of rows and colm: ";
    cin>>m2>>n2;
    mat b(m2, n2);
    cin>>b;
    cout<<"A:\n"<<a;
    cout<<"\nB:\n"<<b;
    if (m==n2 && m2 == n)
    {
        mat r = a*b;
        cout<<"\nA*B\n"<<r;
    }
    else
    {
        cout<<"Cant multiply matrix:\n";
    }
    int k;
    cout<<"enter the no. to be multiplied: ";
    cin>>k;
    mat res = k*b;
    cout<<k<<"*B: \n"<<res;
}
