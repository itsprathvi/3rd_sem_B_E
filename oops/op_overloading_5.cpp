//Program for overloading operators and - operators
#include <iostream>
using namespace std;
class Distance 
{
private:
int feet;
int inches;
public:
// required constructors
Distance() {
feet = 0;
inches = 0;
}
Distance(int f, int i) {
feet = f;
inches = i;
}
// method to display distance
void displayDistance()
{
	cout<<"F:"<<feet<<"I:"<<inches<<endl;
}
// overloaded minus (-) operator
Distance operator- ()
{
feet = -feet;
inches = -inches;
return Distance(feet, inches);
}
friend ostream& operator <<(ostream& out, const Distance &D);
friend istream& operator >>(istream& input,Distance &D);

// overloaded &lt; operator relatinal operator if(d1<d2) // d1.operator&lt;(d2)
bool operator <(const Distance &D)
{
if(feet < D.feet) {
return true;
}
if(feet == D.feet && inches < D.inches) {
return true;
}
return false;
}
};



ostream& operator <<(ostream& out, const Distance &D)
{
	out<<"Feet"<< D.feet<<"inches"<<D.inches<<endl;
	return out;
}

istream& operator >>(istream& input,Distance &D)
{
	input>>D.feet;
	input>>D.inches;
	return input;
}



int main() {
Distance D1(11, 10), D2(5, 11);
if( D1 < D2 )
{
    cout <<"D1 is less than D2"<<endl;
} 
else
{
    cout<<"D2 is less than D1 "<<endl;
}
cout<<"enter the distance1 values\n";
cin>>D1;
cout<<"enter the distance2 values\n";
cin>>D2;
if( D1 < D2 ) {
cout<<"D1 is less than D2"<<endl;
} else {
cout<<"D2 is less than D1"<<endl;
}
cout<<"entered distance is\n";
cout<<D1;
cout<<D2;
-D1;
cout<<D1;
return 0;
}





/*

// program to overload subscript operator
#include<iostream>
using namespace std;
class array 
{
private:
int arr[5];
public:
array()
{
	int i;
	for(i = 0; i < 5; i++)
	{
		arr[i] = i;
	}
}
int &amp;operator[](int i) 
{ //A[1]==&gt;A.operator [](1)
if( i &gt;= 5 ) {
cout &lt;&lt; &quot;Index out of bounds&quot; &lt;&lt;endl;
// return first element.
return arr[0];
}
return arr[i];
}
};
int main() {
array A;
cout &lt;&lt; &quot;Value of A[2] : &quot; &lt;&lt; A[2] &lt;&lt;endl;//A.operator[](2);
cout &lt;&lt; &quot;Value of A[5] : &quot; &lt;&lt; A[5]&lt;&lt;endl;
cout &lt;&lt; &quot;Value of A[4] : &quot; &lt;&lt; A[4]&lt;&lt;endl;
return 0;
}

//program to overload + and == operators for strings
#include&lt;iostream&gt;
#include&lt;string.h&gt;
using namespace std;
class string1
{
char str[100];
int len;
public :
void read();
void print();
string1 operator +(string1);
int operator ==(string1);
};
void string1::read()
{
cout&lt;&lt;&quot;enter the string:\n&quot;;
cin&gt;&gt;str;
len=strlen(str);
}
void string1::print()
{
cout&lt;&lt;&quot;String is&quot;&lt;&lt;str;
}
string1 string1::operator+(string1 s)//s3=s1+s2==&gt; s3=s1.operator+(s2);
{
string1 t;
strcpy(t.str,str);
strcat(t.str,s.str);
t.len=len+s.len;
return t;
}
int string1 ::operator==(string1 s) // s1==s2===&gt; s1.operator==(s2)
{
if(strcmp(str,s.str)==0)
return(1);
else
return(0);
}
int main()
{
string1 s1,s2,s3;
s1.read();
s2.read();
s3=s1+s2;
if(s1==s2)
cout&lt;&lt;&quot;equal\n&quot;;
else

cout&lt;&lt;&quot;not equal\n&quot;;
s3.print();
}
*/