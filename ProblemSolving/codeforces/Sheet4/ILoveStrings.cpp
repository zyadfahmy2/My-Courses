// 2 strings take a letter from 1 string and then a letter from the other string
#include <iostream>
using namespace std;

int main(void)
{
    string s, t;
    int n;
    cin >> n;
    int count = 0;
    bool flag;
    while (count < n)
    {
        cin >> s >> t;
        string x(s.size() + t.size(), 'x');
        int i = 0;
        int j = 0;
        int k = 0;
        flag = true;
        while (i < s.size() && j < t.size())
        {
            if (flag)
            {
                x[k++] = s[i++];
                flag = false;
            }
            else
            {
                x[k++] = t[j++];
                flag = true;
            }
        }

        while (i < s.size())
            x[k++] = s[i++];
        while (j < t.size())
            x[k++] = t[j++];
        cout << x << endl;
        count++;
    }
}