//Program to demonstrate  pointer and objects
#include<iostream>
using namespace std;
class ex
{
  int x,y;
  public:
    void getdata(int a,int b)
    {
      x=a;
      y=b;
    }
   void show()
   {
     cout<<"x="<<x<<"\n";
     cout<<"y="<<y<<"\n";
   }
};
int main()
{
  ex *ptr;
  ex e;// static memory and memory is allocated in stack
  ptr=&e;
  ptr->getdata(67,8);//or (*p).getdata();
  ptr->show(); //or(*p).show();
  ex *p=new ex();//dynamic memory and memory is from heap.
  p->getdata(4,3);
  p->show();
 } 
