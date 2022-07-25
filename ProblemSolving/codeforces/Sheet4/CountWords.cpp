#include <iostream>
using namespace std;
bool issAlpha(char c)
{
    return ((int)c >= 97 && (int)c <= 122) || ((int)c >= 65 && (int)c <= 90) ? true : false;
}
int main(void)
{
    string s;
    getline(cin, s);
    int c = 0;
    int i = 0;
    bool flag = false;
    while (s[i] != '\0')
    {
        if (issAlpha(s[i]) && !flag)
        {
            c++;
            flag = true;
            int j = i;
            while (s[j] != ' ' && s[j] != ' \0')
        }
        if (s[i] == ' ')
        {
            flag = false;
        }
        i++;
    }

    cout << c << endl;
}