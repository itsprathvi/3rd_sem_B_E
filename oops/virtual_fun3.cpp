#include <iostream>

using namespace std;
class A
{
public:
	virtual void display()=0;
};
class B: public A
{

	public:
	void dis()
	{
	  cout<<"I am inside function of derieved class named B\n";
	}
	void display()
	{
	  cout<<"I am inside derieved class B  with function name display\n" ;
	  //cout<<"\n"<<"x="<<x<<"\t"<<"y="<<y<<"\t"<<y1<<endl;
	}
};
class C :public  B
{
	public:
	void display()
	{
	  cout<<"I am inside derieved class  named C  with function name display\n" ;
	  //cout<<"\n"<<"x="<<x<<"\t"<<"y="<<y<<"\t"<<y1<<endl;
	} 
};

int main()
{
A *ptr;//pointer to base class
B *ptr1;
//A obj;
//A obj;
//ptr=&obj; cant do bcz of pure virtual function
//ptr->display();
B obj1;
C obj2;
ptr=&obj1;
ptr1=&obj2;
ptr1->dis();
ptr1->display();
//ptr1=&
// bptr->display();//base class display
 ptr->display();//derieved class display

 ptr=&obj2;//valid
 ptr->display();
 //ptr1=&obj;
 //ptr1->display();
 //derieved class display
// bptr->dis();//Invalid
// bptr=&obj1;
// bptr->display();//base class display
 //dptr=&obj1;
 //ptr=&obj3;
 //ptr->display();//display of c class
 //dptr=&obj3;
 //dptr->display();
 
  return 0;
}
