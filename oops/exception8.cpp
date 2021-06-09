
#include <iostream> 
using namespace std;
class student{
int usn;
int age;
public:
   void read()
   {
         cin>>usn>>age;
    
         if(age<18)
         throw 4; 
   }
  void display()
  {
    cout<<"usn  "<<usn<<"age= "<<age<<"\n";
  }
};
int main() 
{ 
   student s;
   try
   {
      s.read();
      s.display();
   }
  catch(int i)
  {
    cout<<"not eligible for voting\n";
  }
   return(0);
}
