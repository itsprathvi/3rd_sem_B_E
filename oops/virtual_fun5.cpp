#include<iostream>
using namespace std;
class b
{
  public:
     void display()
      {
        cout<<"I am inside base class display function\n";
      }
   virtual void output()
{
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
       void output(){
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
   b *bptr;//valid
   b obj1;//invalid because we cannot create obj1 of class which if it has pure virtual 
   d1 obj2;
   d2 obj3;
   bptr=&obj1;
   bptr->display();// base class display();
   bptr->output();//base class output();
   bptr=&obj2;
   bptr->display();//base class display();
   bptr->output(); // d1's output() 
   bptr=&obj3;
   bptr->display();//base class display();
   bptr->output();//d2's output();
   }
