// getting the absolute difference of the primary and secondary diagonal of a matrix
#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    int psum = 0, ssum = 0;
    for (int i = 0; i < n; i++)
    {
        psum += mat[i][i];
    }
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        ssum += mat[i][j];
        j--;
    }
    psum = psum - ssum;
    if (psum < 0)
    {
        psum *= -1;
    }
    cout << psum;
}