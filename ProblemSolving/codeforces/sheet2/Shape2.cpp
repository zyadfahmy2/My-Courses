#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << ' ';
        }

        for (int k = 0; k < x; k++)
        {
            cout << "*";
        }
        x += 2;
        cout << endl;
    }
}