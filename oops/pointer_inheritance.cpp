//Program to demonstrate pointers and inheritance
#include<iostream>
using namespace std;
class BC
{
  public:
   int b;
  virtual void show()
  {
    cout<<"base"<<"b="<<b<<"\n";
   }
};
class DC :public BC
{
 public: 
      int d;
    void show()
    {
      cout<<"Derived"<<"b="<<b<<"\n";
      cout<<"Derived"<<"d="<<d<<"\n";
    }
};
int main()
{
  BC *bptr;
  BC bobj;
  bptr=&bobj;
  bptr->b=100;
  bptr->show();
  DC dobj;
  bptr=&dobj;
   bptr->b=200;
  //bptr->d=300;//invalid
   bptr->show();
  DC *dptr;
  dptr=&dobj;
  dptr->show();
  dptr->d=300;
  //dptr->b=200;
  dptr->show();
}









