//Program to demonstrate the function that returns this pointer.
#include<iostream>
#include<string.h>
using namespace std;
class person{
 char name[20];
 float age;
 public:
   person(char *s,float a)
   {
    strcpy(name,s);
    age=a;
   }
 person greater(person x)
 {
   if(x.age>=age)
   return x;
   else
    return(*this);
  }
 void display()
 {
  cout<<"name:"<<name<<"\n";
  cout<<"age:"<<age<<"\n";
  }
};
int main()
{
  person p1("Jyothi",37);
  person p2("Srinivas",40);
  person p3("Ajay",27);
  person p=p1.greater(p2);
  cout<<"person elder is\n";
  p.display();
  cout<<"person elder is\n";
  p=p1.greater(p3);
  p.display();
}
