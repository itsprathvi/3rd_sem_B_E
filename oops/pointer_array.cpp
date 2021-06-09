//Program to demonstrate pointer to array

#include<iostream>
using namespace std;
int main()
{
  int arr[10]={1,99,4,37,88,3,19,45,62,87};
  int i,num,*ptr;
  ptr=arr;//base address
  cout<<"Enter the element to be searched";
  cin>>num;
  for(i=0;i<10;i++)
  {
   if(*ptr==num)
   {
     cout<<"found\n";
     break;
   } 
   else if(i==9)
     cout<<"not found\n";
  ptr++;
  }
}

