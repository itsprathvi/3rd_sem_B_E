//Deque
#include <iostream> 
#include <deque> 
  
using namespace std; 
  
void showdq(deque <int> g) 
{ 
    deque <int> :: iterator it; 
    for (it = g.begin(); it != g.end(); it++) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
 
int main() 
{ 
    deque <int> d1; 
    d1.push_back(10); 
    d1.push_front(20); 
    d1.push_back(30); 
    d1.push_front(15); 
    cout << "The deque  is : "; 
    showdq(d1); 
      cout << "\nsize is : " << d1.size(); 
    cout << "\nmax_size is : " <<(int)d1.max_size(); 
      cout << "\nelement at : " << d1.at(2); 
    cout << "\nelement at front : " << d1.front(); 
    cout << "\nelement at back() : " << d1.back(); 
      cout << "\ndelete front : "; 
    d1.pop_front(); 
    showdq(d1); 
      cout << "\ndelete back() : "; 
    d1.pop_back(); 
    showdq(d1); 
      return 0; 
}
