#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool sorted;
    for (int i = 0; i < n; i++)
    {
        sorted = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if ((int)s[j] > (int)s[j + 1])
            {
                char x = s[j];
                s[j] = s[j + 1];
                s[j + 1] = x;
                sorted = false;
            }
        }
        if (sorted)
            break;
    }
    cout << s << endl;
}