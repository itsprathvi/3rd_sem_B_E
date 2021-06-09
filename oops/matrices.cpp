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
            ptr = new int * [m];
            for(int i=0;i < m;i++)
            {
                ptr[i] = new int [n];
            }
            for(int i=0;i < m;i++)
            for(int j=0; j < n; j++)
            {
                ptr[i][j]=0;
            }
        }
        mat(int x, int y)
        {
            m=x;
            n=y;
            ptr = new int * [m];
            for(int i=0;i < m;i++)
                ptr[i] = new int [n];
            for(int i=0;i < m;i++)
            for(int j=0; j < n; j++)
                ptr[i][j]=0;
        }

        void read();
        void display();
        friend mat add(mat b, mat a);

        ~mat()
        {
            cout<<"DEstructor called:";
           /*for(int i=0;i < m;i++)
            {
                delete(ptr[i]);
            }
            delete(ptr);
            */
        }
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

mat add(mat a, mat b)
{
    mat res(a.m, a.n);
    for(int i=0;i < a.m;i++)
    {
        for(int j=0; j<a.n; j++)
        {
            res.ptr[i][j]= a.ptr[i][j]+ b.ptr[i][j];
        }
        cout<<endl;
    }
    return res;
}

int main()
{
    int m,n;
    cout<<"Enter the number of rows and colm: ";
    cin>>m>>n;
    mat a(m,n);
    mat b(m,n);
    a.read();
    b.read();
    mat res(m, n);
    res = add(a,b);
    cout<<"M1\n";
    a.display();
    cout<<"M2\n";
    b.display();
    cout<<"RES: \n";
    res.display();
}
