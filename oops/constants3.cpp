#include<iostream>
using namespace std;
class test
{
    int value;
public:
    test(int v=0)
    {
        value=v;
    }
    int getvalue(int z) const
    {
       // value=100; //Error
        int v = z+10;
        return(v);
      //  return(value); //Error
    }

   /*int getvalue1()
    {
        value=100;
        return(value);
    }*/
    int getvalue1(const int v1,int v2)
    {
        value=100;
        int v=value+10;
      //  v1=v1+3; //Error
        v2=v2+4; //We will not get Error ,its a local variable
        return (value);
    }
};

int main()
{
    test t(1);
    test t1(10);
    cout<<t.getvalue(10)<<endl;
    cout<<t1.getvalue1(30,40)<<endl;
    return 0;
}