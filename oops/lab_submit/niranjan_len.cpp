#include<iostream>
#include<string.h>
using namespace std;
class _string{
    char *name;
    int length;
    public:
    _string(char *c){
        length=strlen(c);
        name=new char[length];
        
        strcpy(name,c);
    }

    ~_string(){
        cout<<"your name is:"<<name;
        delete name;
    }
};
int main(){
    char c;
    char p[100];
    int i=0;
    cout<<"Enter name:";
    cin.getline(p,100);
    _string s(p);

}
