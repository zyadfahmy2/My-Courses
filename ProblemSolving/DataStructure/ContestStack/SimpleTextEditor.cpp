#include <algorithm>
#include <stack>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;
stack<string> staack;

int main()
{
    string s, newS;
    int OpNo;
    int NoOfTests;
    cin >> NoOfTests;
    for (int i = 0; i < NoOfTests; i++)
    {

        cin >> OpNo;
        if (OpNo == 1)
        {
            staack.push(s);
            cin >> newS;
            s.append(newS);
        }

        else if (OpNo == 2)
        {
            int NoOfChar;
            cin >> NoOfChar;
            staack.push(s);
            s.erase(s.length() - NoOfChar);
        }
        else if (OpNo == 3)
        {
            int position;
            cin >> position;
            cout << s[position - 1] << endl;
        }

        else
        {
            s = staack.top();
            staack.pop();
        }
    }
}