#include <iostream>
using namespace std;
bool issAlpha(char c)
{
    if (((int)c >= 97 && (int)c <= 122) || ((int)c >= 65 && (int)c <= 90))
        return true;
    return false;
}
int main(void)
{
    string s;
    getline(cin, s);
    int c = 1;
    int i = 0;
    bool flag = false;
    while (s[i] != '\0')
    {
        if (issAlpha(s[i]))
            flag = true;
        if (s[i] == ' ' && flag && issAlpha(s[i + 1]))
        {
            c++;
            flag = false;
        }
        i++;
    }
    if (s.size() == 0)
        c = 0;
    cout << c << endl;
}