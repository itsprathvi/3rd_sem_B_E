#include<iostream>
#include<map>
#include<string>
using namespace std;
typedef map<string,int> phoneMap;
int main()
{
   string name;
  int number;
  phoneMap phone;
 cout<< "enter three sets of name and number\n";
for(int i=0;i<3;i++)
{
  cin>>name;
  cin>>number;
 phone[name]=number;
}

phone.insert(pair<string,int>("pqr",5555));
int n=phone.size();
//cout<<n;
phoneMap::iterator p;
for(p=phone.begin();p!=phone.end();p++)
{
  cout<<(*p).first<<" "<<(*p).second<<"\n\n";
}
   cout<<"enter name";
   cin>>name;
   number= phone[name];
   cout<<"Number:"<<number<<"\n";
return 0;
}
