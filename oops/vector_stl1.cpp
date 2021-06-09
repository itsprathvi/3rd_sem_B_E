//Standard template library

//Vector

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v1)
{
   for(int i=0;i<v1.size();i++)
   { 
     cout<<v1[i]<<" ";
   }
  cout<<"\n";
}

void display(vector<float> &v1)
{
   for(int i=0;i<v1.size();i++)
   { 
     cout<<v1[i]<<" ";
   }
   cout<<"\n";
}


int main()
{
 vector<int> v;
cout<<"intial size ="<<v.size()<<"\n";
cout<<"maximum size of the vector="<<(int)v.max_size()<<"\n";
cout<<"capacity of the vector="<<v.capacity()<<"\n";


int x;


cout<<"enter five integer values:";
  for(int i=0;i<5;i++)
  {
     cin>>x;
     v.push_back(x);
  }

cout<<"size after adding 5 values:";
cout<<v.size()<<"\n";
cout<<"capacity : "<<v.capacity()<<"\n";
cout<<"Current contents:\n";
display(v);


v.push_back(6);
cout<<"\n size ="<<v.size()<<"\n";
cout<<"contents now are";
display(v);


vector<int>::iterator itr=v.begin() ;// int *ptr=&i
itr=itr+4;
v.insert(itr,2,99);
display(v);
v.erase(v.begin()+6);

display(v);

itr=v.begin()+1;
v.erase(v.begin()+3,v.begin()+5);
display(v);

cout<<"capacity of the vector="<<v.capacity()<<"\n";




vector<float> v1;
cout<<"intial size ="<<v1.size()<<"\n";
cout<<"maximum size of the vector="<<(int)v1.max_size()<<"\n";
cout<<"capacity of the vector="<<v1.capacity()<<"\n";
float x1;
cout<<"enter five float values:";
for(int i=0;i<5;i++)
{
   cin>>x1;
   v1.push_back(x1);
  }

cout<<"size after adding 5 values:";
cout<<v1.size()<<"\n";
cout<<"Current contents:\n";
display(v1);
v1.push_back(6.6);
cout<<"\n size ="<<v1.size()<<"\n";
cout<<"contents now are";
display(v1);
vector<float>::iterator itrs=v1.begin() ;// int *ptr=&i
itrs=itrs+3;
v1.insert(itrs,1,45);
display(v1);
v1.erase(v1.begin()+3,v1.begin()+5);
display(v1);
itrs=v1.begin()+1;
v1.erase(itrs+2);
display(v1);

cout<<"capacity of the vector="<<v.capacity()<<"\n";
return(0);
}






