//Program 3
#include<iostream>
using namespace std;
int main()
{
    try 
    {
        try 
        {
            throw 1 ;
        }
        catch (int n) 
        {
            cout << "Handle Partially ";
            throw; // Re-throwing an exception
        }
    }
    catch (int n) 
    {
        cout << "Handle remaining ";
    }
    return 0;
}

