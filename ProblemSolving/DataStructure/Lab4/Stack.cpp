#include "Stack.h"

Stack::Stack()
{
    top = -1;
}
bool Stack::push(int x)
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
void Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack is Empty";
    }
    top--;
}
int Stack::getTop()
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
bool Stack::isEmpty()
{
    return (top < 0);
}