// Rethrow

#include <iostream>
using namespace std;
 
int main()
{
    try  
    {
       throw 'a';
    }
    catch (char x)  
    {
        cout << "Caught ";
    }
    return 0;
}
