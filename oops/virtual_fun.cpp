//Program for pure virtual functions
/*
#include<iostream> 
using namespace std; 
  
class Base 
{ 
   int x; 
public: 
    virtual void fun() = 0; //pure virtual function
    int getX() { return x; } 
}; 
  
// This class inherits from Base and implements fun() 
class Derived: public Base 
{ 
    int y; 
public: 
    void fun() { cout << "fun() called by derieved class"; } 
}; 
  
int main() 
{ 
    Base *ptr;
    Derived d; 
    ptr=&d;
    ptr->fun(); 
    
    //Base B;
    //B.fun();
   return 0; 
}
*/

//Program for pure virtual functions


#include <iostream>
using namespace std;

// Abstract class
class Shape {
   protected:
    float dimension;

   public:
    void getDimension()
    {
        cin >> dimension;
    }

    // pure virtual Function
   // virtual float calculateArea()=0;
    virtual float calculateArea()
    {
        cout<<"omkar hippo\n";
        return 0;
    }
};

// Derived class
class Square : public Shape
{
   public:
    float calculateArea()
    {
        return dimension * dimension;
    }
};

// Derived class
class Circle : public Shape
{
   public:
    float calculateArea()
    {
        return 3.14 * dimension * dimension;
    }
};

int main() {
    Square square;
    Circle circle;
     Shape *ptr;
     ptr=&square;
    cout << "Enter the length of the square: ";
    ptr->getDimension();
    cout << "Area of square: " << ptr->calculateArea() << endl;
     ptr=&circle;
    cout << "\nEnter radius of the circle: ";
    ptr->getDimension();
    cout << "Area of circle: " << ptr->calculateArea() << endl;
    return 0;
}