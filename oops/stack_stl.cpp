//stack
#include <iostream> 
#include <stack>  
using namespace std;
void display(stack <int> s1)
{
	while (!s1.empty())
	{
		cout << '\t' << s1.top();
		s1.pop();
	}
	cout << '\n';
}
int main()
{
	stack <int> st;
	st.push(32);
	st.push(21);
	st.push(39);
	st.push(89);
	st.push(25);

	cout << "The stack st is: ";
	display(st);
	cout << "\n size of the stack is : " << st.size();
	cout << "\n top element is  : " << st.top();
        st.pop();
        cout<<"\nstack after deleting the element is\n";
	display(st);
	return 0;
}
