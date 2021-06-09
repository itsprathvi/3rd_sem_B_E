//PROGRAMME TO CREATE CLASS WITH USN AND AGE RAISE AN EXCEPTION WHEN USEN ENTER AGE LESS THAN 18
#include<iostream>
using namespace std;
class stu{
    protected:
    int a;
    string name;
    public:
    stu(int x,string y);
    ~stu();
};
stu::stu(int x,string y)
{
    try{
        if(x<18)
        {
            throw -1;
        }
    }
    catch (int x)
    {
        cout<<"\nShould be above 18\n";
    }
}
stu::~stu()
{
    cout<<"\nstu deleted";
}
int main()
{
    stu s1(21,"yatish");
    stu s2(10,"sriram");
}