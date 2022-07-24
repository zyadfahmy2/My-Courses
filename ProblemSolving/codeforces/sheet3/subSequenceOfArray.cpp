#include <iostream>
using namespace std;
int main(void)
{
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    int j = 0;
    for (int i = 0; i < n1; i++)
    {
        if (a[i] == b[j])
            j++;
        else
            continue;
    }
    if (j == n2)
        cout << "YES";
    else
        cout << "NO";
}