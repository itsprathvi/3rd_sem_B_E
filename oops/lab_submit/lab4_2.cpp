
#include<iostream>
using namespace std;

class vehicle{
    int register_no;
    static int count;
    public:
        vehicle()
        {
            count++;
        }
        void setregno()
        {   
            cout<<"Enter Registration no:";
            cin>>register_no;
        }
        void getregno()
        {
            cout<<"\n REGISTER NO: "<< register_no;
        }

        void getVehiclecount()
        {
            cout<<"\n Number of vehicle: "<< count<<endl;
        }
};
int vehicle::count;

int main()
{
    cout<<"VEHICLE INSURANCE COOPERATION:\n";
    vehicle a;
    a.setregno();
    a.getregno();
    a.getVehiclecount();
    vehicle b;
    b.setregno();
    b.getregno();
    b.getVehiclecount();
}
