/*Implement the following relationship using appropriate member variables and
 member functions.*/


#include<iostream>
using namespace std;

class person{
    string name;
    int age;
    public:    
        void setdata(string nm, int ag){
            name = nm;
            age = ag;
        }
        string getname(){
            return name;
        }
        int getage(){
            return age;
        }
};

class student: virtual public person{
    string usn;
    public:
        void setusn(string u){
            usn = u;
        }
        string getusn(){
            return usn;
        }
};

class faculty: virtual public person{
    string id;
    public:
        void setid(string u){
            id = u;
        }
        string getid(){
            return id;
        }
};

class TA:public student,public faculty{
    string course;
    public:
        void setcourse(string c){
            course = c;
        }
        string getcourse(){
            return course;
        }
};

int main()
{
    TA s1();
    //s1.setdata()
}
