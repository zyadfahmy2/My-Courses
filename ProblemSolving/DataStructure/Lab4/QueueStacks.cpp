#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, testNo, No;
    stack<int> stk1, stk2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> testNo;
        // enqueue
        if (testNo == 1)
        {
            cin >> No;
            stk1.push(No);
        }
        else
        {
            if (stk2.empty())
            {
                while (!stk1.empty())
                {
                    stk2.push(stk1.top());
                    stk1.pop();
                }
            }
            // dequeue
            if (testNo == 2)
                stk2.pop();
            // print
            else
                cout << stk2.top() << endl;
        }
    }

    return 0;
}
