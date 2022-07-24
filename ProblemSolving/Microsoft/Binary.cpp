#include <iostream>
using namespace std;
#include <stack>;
string bin(int n)
{
    string s = "";
    int x;
    stack<int> stk;
    while (n > 0)
    {

        stk.push(n % 2);
        n = n / 2;
    }
    while (!stk.empty())
    {
        s += stk.top() + 48;
        stk.pop();
    }
    return s;
}
void binrec(int n)
{
    if (n == 0)
        return;
    binrec(n / 2);
    cout << n % 2;
}
// get the number of binary didgits
int floar(int n)
{
    n = n / 2;
    return n;
}
int binn(int n)
{
    cout << n;
    if (n <= 1)
    {
        return 1;
    }
    return binn(floar(n)) + 1;
}
int main(void)
{

    binrec(5);
}