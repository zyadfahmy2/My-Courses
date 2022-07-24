#include <iostream>
using namespace std;
int main(void)
{
    int n, z = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        for (int x = 0; x < z; x++)
        {
            cout << '*';
        }
        z += 2;
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        z -= 2;
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int x = 0; x < z; x++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}