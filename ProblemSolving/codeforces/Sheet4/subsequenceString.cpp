#include <iostream>
using namespace std;

int main(void)
{
    string s;
    string t = "hello";
    cin >> s;
    int i = 0;
    int j = 0;
    while (s[i] != '\0')
    {
        if (s[i] == t[j])
        {
            j++;
        }
        if (j == t.size())
        {
            cout << "YES\n";
            return 0;
        }
        i++;
    }
    cout << "NO\n";
}