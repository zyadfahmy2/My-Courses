#include <iostream>
using namespace std;
int main(void)
{
    string s;
    int n, sum = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        sum += s[i] - '0';
    }
    cout << sum;
}