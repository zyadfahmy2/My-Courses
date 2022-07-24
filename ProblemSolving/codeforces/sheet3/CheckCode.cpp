#include <iostream>
using namespace std;
int main(void)
{
    int a, b;
    cin >> a >> b;
    int n = a + b + 1;
    string s;

    cin >> s;
    for (int i = 0; i < a + b + 1; i++)
    {
        if (s[a] != '-')
        {
            cout << "No";
            return 0;
        }
        if (a != i && (int)s[i] < 48 || (int)s[i] > 57)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}