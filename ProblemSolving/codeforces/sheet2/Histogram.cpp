#include <iostream>
using namespace std;
int main(void)
{
    char s;
    int n, z;
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> z;
        for (int j = 0; j < z; j++)
        {
            cout << s;
        }
        cout << "\n";
    }
}