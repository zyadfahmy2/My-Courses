#include <iostream>
using namespace std;
int main(void)
{
    int n1, n2;
    cin >> n1 >> n2;
    int mat[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> mat[i][j];
        }
    }
    int x;
    cin >> x;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (x == mat[i][j])
            {
                cout << "will not take number\n";
                return 0;
            }
        }
    }
    cout << "will take number";
}