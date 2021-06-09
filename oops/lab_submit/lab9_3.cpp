/*Create a base class called SHAPE. Use this class to store two double type values that could be used to compute the area of figures.
Derive two specific classes called Triangle and Rectangle from the class SHAPE. Add to the base class, a member function get_data() to 
initialize base class data member and other member function display_area() to compute and display the area of figure.
Make display_area() as a virtual function and redefine this function in the derived classes to suit their requirements.*/

#include<iostream>
using namespace std;

class shape
{
public:
double height,width,length;
	void getdata(float x,float y,float z)
	{
		height=x;
		width=y;
		length=z;
	}
	void virtual display_area()=0;
	
};

class triangle : public shape
{
public:
	void display_area()
	{
		float a=0.5*height*length;
		cout<<"Area of Triangle : "<<a<<endl;
	}
};

class rectangle : public shape
{
	void display_area()
	{
		float b=width*length;
		cout<<"Area of Rectangle : "<<b<<endl;
	}
};

int main()
{
 shape *ptr;
 triangle b;
 ptr=&b;
 ptr->getdata(10,20,30);
 ptr->display_area();
 rectangle c;
 ptr=&c;
  ptr->getdata(10,20,30);
 ptr->display_area();
 return 0;
}


