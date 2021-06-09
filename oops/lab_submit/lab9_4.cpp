#include<iostream>
using namespace std;
class ship
{
    protected:
    int year;
    string name;
    public:
    ship(int year_,string name_)
    {
        year=year_;
        name=name_;
    }
    void set_year(int year_)
    {
        year=year_;
    }
    void set_name(string name_)
    {
        name=name_;
    }
    string get_name()
    {
        return name;
    }
    int get_yesr()
    {
        return year;
    }
    virtual void print()
    {
        cout<<"name-> "<<name<<" year -> "<<year<<endl;
    }
};
class CruiseShip:public ship
{
    protected:
    int max_passenger;
    public:
    CruiseShip(int max,int year_,string name_):ship(year_,name_)
    {
        max_passenger=max;
    }
    int get_max_passenger()
    {
        return max_passenger;
    }
    void set_max_passenger(int max)
    {
        max_passenger=max;
    }
    void print()
    {
        cout<<"name-> "<<name<<" maximum passengers ->"<<max_passenger<<endl;
    }
};
class CargoShip:public ship
{
    int cargo_capacity;
    public:
    CargoShip(int capacity_,int year_,string name_):ship(year_,name_)
    {
        cargo_capacity=capacity_;
    }
    void set_cargo_capacity(int k)
    {
        cargo_capacity=capacity_;
    }
    int get_cargo_capacity()
    {
        return cargo_capacity;
    }
    void print()
    {
        cout<<"name-> "<<name<<"cargo capacity->"<<cargo_capacity<<endl;
    }
};
int main()
{
ship *list[10];
for (int i = 0;i<2;i++)
{
    cout<<"enter the maximum passenger, year of manufacturing and  name of the ship\n";
    int max,year;
    string name;
    cin>>max>>year>>name;
    // CruiseShip sh(max,year,name);
    list[i]=new CruiseShip(max, year,name);
}
for (int i = 2 ; i<4;i++)
{
    cout<<"enter the maximum cargo , year of manufacturing and  name of the ship\n";
    int max,year;
    string name;
    cin>>max>>year>>name;
    // CargoShip sh(max,year,name);
    list[i]=new CargoShip(max, year,name);
}

for (int i = 0; i <4; i++)
{
list[i]->print();
}
}