#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
string reverse_string(string c)
{
    stack<char> s;
    string strR = "";

    for (int i = 0; i < c.length(); i++)
    {
        s.push(c[i]);
    }
    for (int i = 0; i < c.length(); i++)
    {
        strR += s.top();
        s.pop(); 
    }
    return strR;
}
int main(void)
{
    string s = "ahmed";
    cout << reverse_string(s);
}