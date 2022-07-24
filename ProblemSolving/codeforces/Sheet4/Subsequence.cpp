#include <iostream>
using namespace std;

int main(void)
{
    string s = "hello";
    string t;
    cin >> t;
    int i = 0;
    int j = 0;
    int size = t.size();
    while (i <= size - 5)
    {
        if (t[i] == s[j])
        {
            for (int x = i; x < i + s.size(); x++)
            {
                if (t[x] == s[j])
                {
                    j++;
                    continue;
                }

                else
                {
                    j = 0;
                    break;
                }
            }
            if (j == s.size())
            {
                cout << "YES\n";
                return 0;
            }
        }
        i++;
    }
    cout << "NO\n";
}