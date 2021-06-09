#include<iostream>
using namespace std;
class constants
{
    int x;
    int const y=10;
    int z;
public:
const void read(const int p,int q)// const //Applicable for Global variable
{
   // p=p+30;
    q=30;
    x=p;
    // y=20;
    z=p+q;
   // q=q+10;
}
void display()
{
    cout<<"x= "<<x+10<<endl<<"Y= "<<y+10<<endl<<"Z= "<<z+10<<endl;
}
};
int main()
{
    constants a;
    int p,q;
    printf("Enter the two elements : ");
    scanf("%d %d",&p,&q);
    a.read(p,q);
    a.display();
}