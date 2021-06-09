#include<iostream>
using namespace std;

class employee{
    int num;
    string name;
    float basic, da, it,net_salary, gross_salary;
    public:
        void read()
        {
            cout<<"Enter the employee number: ";
            cin>>num;
            cout<<"Enter the employee name: ";
            cin>>name;
            cout<<"Enter the basic: ";
            cin>>basic;
        }

        void calculate()
        {
            da = (52.0/100.0*basic);
            gross_salary = da + basic;
            it = (0.30*gross_salary);
            net_salary = basic + da - it;
        }

        void display()
        {
            cout<<"employee-id: "<<num<<endl;
            cout<<"Employee-nmae: "<<name<<endl;
            cout<<"basic: "<<basic<<endl;
            cout<<"DA: "<<da<<endl;
            cout<<"Gross Salary: "<<gross_salary<<endl;
            cout<<"IT :"<<it<<endl;
            cout<<"Net Salary :"<<net_salary<<endl;
        }    
};

int main()
{
    employee e1[10];
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        e1[i].read();
        e1[i].calculate();
        e1[i].display();
    }
}
