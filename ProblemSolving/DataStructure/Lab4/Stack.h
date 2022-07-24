#include <iostream>
using namespace std;
#define MAX 1000

class Stack
{
    int top;
    int a[MAX];

public:
    Stack();
    bool push(int x);
    void pop();
    int getTop();
    bool isEmpty();
};
// don't forget the semicolon
