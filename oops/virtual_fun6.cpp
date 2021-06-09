#include<iostream>
using namespace std;
class b
{
  public:
     void display()
      {
        cout<<"I am inside base class display function\n";
      }
      void output(){
       cout<<"I am in side base class output function\n";
       }
};
class d1 :public b
{
  public:
     void display()
      {
        cout<<"I am inside derieved d1 class display function\n";
      }
    virtual void output(){
       cout<<"I am in side derieved d1 class output function\n";
       }
};
class d2 :public d1
{
  public:
     void display()
      {
        cout<<"I am inside derieved d2 class display function\n";
      }
       void output(){
       cout<<"I am in side derieved d2 class output function\n";
       }
};
int main()
{
   b *bptr;
   b obj1;
   d1 obj2;
   d2 obj3;
   bptr=&obj1;
   bptr->display();// base class display();
   bptr->output();//base class output();
   bptr=&obj2;
   bptr->display();//base class display();
   bptr->output(); //base class output() 
   bptr=&obj3;
   bptr->display();//base class display();
   bptr->output();//base class output();
   d1 *dptr;
  // dptr=&obj1;//invalid
   dptr=&obj2;
   dptr->display();// d1's
    dptr->output(); //d1's
    dptr=&obj3;
   dptr->display();// d1's
    dptr->output(); // d2's
   // dptr=&obj1;
  // dptr->display();// d1's
   // dptr->output();
   
   }
