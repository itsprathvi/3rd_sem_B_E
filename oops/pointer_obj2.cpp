//Program to demonstrate array  of objects and pointers.

#include<iostream>
#include<string.h>
using namespace std;
class city
{
  protected:
    char* name;
    int len;
  public:
   city()
   {
      len=0;
      name= new char[len+1];
    }
void getname()
{
  char *s;
  s=new char[30];
  cout<<"enter the city name \t:";
  cin>>s;
  len= strlen(s);
  name= new char[len+1];
  strcpy(name,s);
 }

void printname()
{
  cout<<name<<"\n"; 
}

};
int main()
{
 city *cptr[10];
for(int i=1;i<=5;i++)
{
cptr[i]=new city();
cptr[i]->getname();
}
cout<<"cities entered are\n";
for(int i=1;i<=5;i++)
{
cptr[i]->printname();
}
}
