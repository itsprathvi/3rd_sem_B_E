#include<iostream>
#include<list>
#include<cstdlib>
using namespace std;

void display(list<int> &st)
{
  list<int>::iterator p;
for(p=st.begin();p!=st.end();++p)
   cout<<*p<<", ";
cout<<"\n";
}

int main()
{
  list<int> list1;
  list<int> list2[5];
	for(int i=0;i<3;i++)
	{
		list1.push_back(rand()/100);
	}

	list<int> ::iterator p;
	for(p=list2.begin();p!=list2.end();++p)
	{
		*p=rand()/100;
	}
cout<<"list1\n"<<endl;
display(list1);
cout<<"list2\n"<<endl;
display(list2);
}

list1.push_front(100);
list1.push_back(200);
list2.pop_front();
display(list1);
display(list2);
list<int> listA,listB;
listA=list1;
listB=list2;
list1.merge(list2);
display(list1);
listA.sort();
listB.sort();;
listA.merge(listB);
display(listA);
listA.reverse();
display(listA);








