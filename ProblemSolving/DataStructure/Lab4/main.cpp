#include <iostream>
using namespace std;
#define MAX 1000

class Stack
{
    int top;
    int a[MAX];

public:
    Stack()
    {
        top = -1;
    }
    bool push(int x)
    {
        if (top > MAX - 1)
        {
            cout << "Stack overflow";
            return 0;
        }
        else
        {
            a[++top] = x;
            cout << x << " is Pushed to the Stack \n";
            return 1;
        }
    }
    void pop()
    {
        if (top < 0)
        {
            cout << "Stack is Empty";
        }
        top--;
    }
    int getTop()
    {
        if (top < 0)
        {
            cout << "Stack is Empty";
            return 0;
        }
        else
        {
            return a[top];
        }
    }
    bool isEmpty()
    {
        return (top < 0);
    }
};
using namespace std;
int main(void)
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    while (!s.isEmpty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }
}