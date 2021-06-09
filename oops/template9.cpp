/* C++ Program to implement Stack using template */
 
    #include <iostream>
    #include <string>
    using namespace std;
 
        template <class T>
        class Stack
        {
        public:
                void push(T i);
                T pop();
        private:
                int top = -1;
                T st[100];
        };
        template <class T>
        void Stack<T>::push(T i)
        {
                st[++top] = i;
        }
 
        template <class T>
        T Stack<T>::pop()
        {
                return st[top--];
        }
 
        int main ()
        {
                Stack<int> int_stack;
                Stack<string> str_stack;
                int_stack.push(100);
                str_stack.push("Hello bms");
                str_stack.push("good morning");
                cout << int_stack.pop() << endl;
                cout << str_stack.pop() << endl;
                cout << str_stack.pop() << endl;
                return 0;
        }
