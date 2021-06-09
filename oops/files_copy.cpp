// ipers.cpp
// reads person object from disk
#include <fstream>                //for file streams
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class person                      //class of persons
   {
   protected:
      char name[80];              //person's name
      short age;                  //person's age
   public:
      void showData()             //display person's data
      {
         cout << "Name: " << name << endl;
         cout << "Age: " << age << endl;
      }
      void getData()              //get person's data
      {
         cout << "Enter name: "; cin >> name;
         cout << "Enter age: "; cin >> age;
      }
   };
////////////////////////////////////////////////////////////////
int main()
   {
      person pers;                   //create person variable
      ifstream infile("PERSON.DAT", ios::binary | ios::in); 
      ofstream outfile("PERSON_COPY.DAT", ios::binary | ios:: app);//create stream
       
      while(infile.read((char*)&pers, sizeof(pers)))   //read stream
         outfile.write((char*)&pers, sizeof(pers));                           //display person
      return 0;
   }




copying binary file:)