/* MAP*/
#include <iostream> 
#include <iterator> 
#include <map> 
  
using namespace std; 
  
int main() 
{ 
  
    // empty map container 
    map<int, int> m1; 
  
    // insert elements in random order 
    m1.insert(pair<int, int>(1, 40)); 
    m1.insert(pair<int, int>(12, 30)); 
    m1.insert(pair<int, int>(3, 60)); 
    m1.insert(pair<int, int>(34, 20)); 
    m1.insert(pair<int, int>(5, 50)); 
    m1.insert(pair<int, int>(46, 50)); 
    m1.insert(pair<int, int>(7, 10)); 
  
  
    // printing map m1 
    map<int, int>::iterator itr; 
    cout << "\nThe map m1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = m1.begin(); itr != m1.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
  
    // assigning the elements from m1 to m2
    map<int, int> m2(m1.begin(), m1.end()); 
  
    // print all elements of the map m2
    cout << "\nThe map m2after"
         << " assign from m1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = m2.begin(); itr != m2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
  
    // remove all elements up to 
    // element with key=3 in m2
    cout << "\nm2after removal of"
            " elements less than key=3 : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    m2.erase(m2.begin(), m2.find(7)); 
    for (itr = m2.begin(); itr != m2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    // remove  element with key = 4 
    int num; 
    num = m2.erase(34); 
    cout << "\nm2.erase(4) : "; 
    cout << num << " removed \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = m2.begin(); itr != m2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
      cout << endl; 
        return 0; 
}
