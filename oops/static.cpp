#include<iostream>
using namespace std;

class ex{
    int x; // memebr variable 
    static int y;//static variable 
    public:
    static int z;
    void read()
    {
        cin>>x;
        y++;
        
    }
    void display()//non static functions 
    {
        cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
    }
    
   static void dis() //static function it can access only static varaibles and onter static memebr functions
    {
     //  cout<<"x="<<x<<"\t"//accessing  non static variables
        cout<<"y="<<y<<endl; 
    }
    };
    int ex::y=0; //static variables
    int ex::z=100;//static variables
  /* void func()
   {
       g=g+100;
       cout<<g;
   }*/
int main()
{
    ex e;
   // cout<<g;//gloabal variable
    cout<<ex::z;
    cout<<"enter the value of x\n";
    e.read();
    e.display();//y=1  x=20
   cout<<"number objects created is\n";
    ex::dis();
    ex e1,e2;
     cout<<"enter the value of x\n";
    e1.read();
    e1.display();// y=2 x=20
   cout<<"number objects created is\n";
    ex::dis();
     cout<<"enter the value of x\n";
    e2.read();
    e2.display();//y=3 x=20
    cout<<"number objects created is\n";
    ex::dis();
}
