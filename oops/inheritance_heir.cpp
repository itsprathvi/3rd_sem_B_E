//Hierarchical Inheritance

#include <iostream>
using namespace std;
// base class
class Vehicle
{
public:
Vehicle()
{
cout<<"This is a Vehicle"<<endl;
}

void dis()
{
cout<<"message from base class\n";
}

~Vehicle()
{
	cout<<"Iam the Destructor\n";
}
};

// first sub class
class Car: public Vehicle
{
public:
void display()
{
cout<<"In class Car\n";
}
};
// second sub class
class Bus: public Vehicle
{
public:
void display()
{
cout<<"In class Bus\n";
}
};
// main function
int main()
{
// creating object of sub class will
// invoke the constructor of base class
	
Car obj1;
obj1.display();
Bus obj2;
obj2.display();
obj1.dis();
obj2.dis();
return 0;
}

