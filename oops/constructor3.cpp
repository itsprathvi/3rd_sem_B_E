 #include<iostream>
using namespace std;

class complex
{
	
public:
	int x,y;
	complex()
	{
		x=0;
		y=0;
	}
	complex(int a,int b)
	{
		x=a;
		y=b;	
	}
	complex(complex &b) //copy constructor
	{
		x=b.x;
		y=b.y;
	}
	void display()
	{
		cout<<endl<<"x= "<<x<<"\t"<<"Y= "<<y<<endl;
	}
};

int main()
{
	complex c1;//default
	c1.display();//0,0
	cout<<endl;
	complex c2(2,9);
	c2.display(); //2,0
	cout<<endl;
	complex c3(3,5);
	c3.display();
	cout<<"\t <- c3" << endl;
	complex c4(c3);
	c4.display();
	cout<<endl;
	complex c5=c2;
	c5.display();
	cout<<endl;
	complex c6;
	c6.display();
	cout<<endl;
	c6=c5;
	c6.display();
	cout<<endl;
	cout<<"Enter the values of x and y\n";
	// int x,y;
	// cin>>x>>y;
	// complex c7(x,y);//paramatrized constructor dynamic initialization 
	//c7.display();
	c4.x += 10;
	c3.display();
	c4.display();

}
	
	
	
	
	
