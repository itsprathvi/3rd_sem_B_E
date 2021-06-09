#include<iostream> 
using namespace std; 

class Base {}; 
class Derived: public Base {}; 
int main() 
{ 
	Base b;
	 Derived d; 
// some other stuff 
try { 
	// Some monitored code 
	throw d; 
	} 
// catch(Base b) { 


catch(Derived d) { 
		cout<<"Caught Base Exception"; 
} 
catch(Base b) { //This catch block is NEVER executed 
		cout<<"Caught Derived Exception"; 
}

getchar(); 
return 0; 
} 
