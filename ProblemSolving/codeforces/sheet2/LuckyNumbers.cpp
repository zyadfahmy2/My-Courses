#include <iostream>
using namespace std;
#include <string>

int main(void)
{
    int a, b;
    cin >> a >> b;
    bool check = false;
    for (int i = a; i <= b; i++)
    {
        int count = 0;
        string s = to_string(i);
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '4' || s[j] == '7')
                count++;
            else
                break;
        }

        if (count == s.length())
        {
            cout << s << " ";
            check = true;
        }
    }
    if (check == false)
    {
        cout << -1;
    }
}