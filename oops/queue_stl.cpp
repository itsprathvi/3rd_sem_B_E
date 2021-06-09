//Queue
#include <iostream>
#include <queue>
 using namespace std;
 // Print the queue
void showq(queue<int> q1)
{
    while (!q1.empty())
    {
        cout << '\t' << q1.front();
        q1.pop();
    }
    cout << '\n';
}
 
// Driver Code
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60); 
 
    cout << "The queue  is : ";
    showq(q);
 
    cout << "\nsize is : " << q.size();
    cout << "\nele at front() : " << q.front();
    cout << "\nelement at end() : " << q.back();
     cout << "\ndelete() : ";
    q.pop();
    cout<<"queue after deletion \n";
    showq(q);
    q.push(65);
     cout<<"queue after insertion\n";
    showq(q);
    
    return 0;
}


