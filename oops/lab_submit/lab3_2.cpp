#include<iostream>
using namespace std;

class student{
    private:
        string USN;
        int test[3][6];
        float best[6];
    public:
        void read();
        void display();
        void best_of_2();
        void display_avg();
};

void student::read(){
    printf("Enter the USN: ");
    cin>>this->USN;
    for(int i=0; i<3;i++)
    {
        cout<<"\nTEST "<<i+1<<endl;
        for(int j=0; j<6;j++)
        {
            cout<<"Enter the marks in subject-"<<j+1<<": ";
            cin>>test[i][j];
        }
        cout<<endl;
    }
}
void student::display(){
    cout<<"\nUSN: "<<this->USN;
    for(int i=0; i<3;i++)
    {
        cout<<"\nTEST "<<i+1<<endl;
        for(int j=0; j<6;j++)
        {
            cout<<"Marks in subject-"<<j+1<<" is :"<<test[i][j]<<endl;
        }
        cout<<endl;
    }
}
void student::best_of_2()
{
    for(int j=0; j<6; j++)
    {
        int small = test[0][j];
        best[j] = 0;
        for(int i=0; i<3; i++)
        {
            best[j] += test[i][j];
            if (test[i][j]<small)
                small = test[i][j];
            
        }
        best[j] -= small;
        best[j] /= 2;
    }
}
void student::display_avg()
{
    cout<<endl;
    for(int j=0; j<6;j++)
    {
        cout<<"Avg marks in subject-"<<j+1<<" is :"<<best[j]<<endl;
    }
    cout<<endl;
}

int main()
{
    student s;
    s.read();
    s.display();
    s.best_of_2();
    s.display_avg();
    return 0;
}
