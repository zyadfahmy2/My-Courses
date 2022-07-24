#include <iostream>
using namespace std;
int main(void)
{
    int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = x + 1; j < x + 4; j++)
        {
            cout << j << " ";
        }
        x += 4;
        cout << "PUM"
             << "\n";
    }
}