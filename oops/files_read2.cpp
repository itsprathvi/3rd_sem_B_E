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
   };
////////////////////////////////////////////////////////////////
int main()
   {
      person pers;                   //create person variable
      ifstream infile;
      infile.open("PERSON.DAT", ios::binary); //create stream
       
      while(infile.read((char*)(&pers), sizeof(pers)))   //read stream
         pers.showData();
      infile.close();                            //display person
      return 0;
   }