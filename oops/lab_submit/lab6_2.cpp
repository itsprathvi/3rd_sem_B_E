#include<iostream>
using namespace std;
class complex
{
    int x,y;
    public:
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
    friend istream& operator>>(istream &input,complex &c);
    friend ostream& operator<<(ostream &output,complex &c);
};
istream& operator>>(istream &input,complex &c)
{
    input>>c.x;
    input>>c.y;
    return(input);
}
ostream& operator<<(ostream &output,complex &c)
{
    output<<c.x;
    output<<c.y;
    return(output);
}

int main()
{
    complex c1,c2;
    cout<<"Enter the first complex number\n";
    cin>>c1;
    cout<<"Enter the second complex number\n";
    cin>>c2;
    cout<<"First complex number\n";
    cout<<c1<<endl;
    cout<<"Second complex number\n";
    cout<<c2<<endl;
}