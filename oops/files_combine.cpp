/ opers.cpp
// saves person object to disk
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
      void getData()              //get person's data
         {
         cout << "Enter name: "; cin >> name;
         cout << "Enter age: "; cin >> age;
         }
      void showData()             //display person's data
         {
         cout << "Name: " << name << endl;
         cout << "Age: " << age << endl;
         } 
   };
////////////////////////////////////////////////////////////////
int main()
   {
   person pers;                   //create a person
   // pers.getData();                //get data for person, 
                                  //create ofstream object
   fstream outfile;
   outfile.open("PERSON.DAT", ios::binary | ios::app | ios::in);
                                  //write to it
   
   for(int i = 0; i < 3; i++)
   {
      pers.getData();
      outfile.write((char*)&pers, sizeof(pers)); 

   }
   // pers.getData();
   // outfile.write((char*)&pers, sizeof(pers)); 
   // pers.getData();
   // outfile.write((char*)&pers, sizeof(pers)); 

   while(outfile.read((char*)&pers, sizeof(pers)))
      pers.showData();
   outfile.close(); 
   return 0;
   }