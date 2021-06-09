#include<iostream>
using namespace std;
class myfun
{
	int p;
	int q;
public:
	void read(int x,int y) 
	{
		this->p=x;
		this->q=y;
	}
	myfun add(myfun &r)
	{
		myfun res;
		res.p=this->p + r.p;
		res.q=this->q + r.q;
		return res;
	}
	
	void display()
	{
		cout<<"---------------------"<<endl;
		cout<<"a="<<this->p<<endl<<"b="<<this->q<<endl;
	}
};

int main()
{
	myfun a,b,r;
	int x,y;
	cout<<"Enter the first two value : ";
	cin>>x>>y;
	a.read(x,y);
	cout<<"Enter the second two value : ";
	cin>>x>>y;
	b.read(x,y);
	r=a.add(b);
	r.display();
	return 0;
}
	
	
	
