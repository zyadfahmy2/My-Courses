#include <iostream>
using namespace std;
double minnn(double x[], int start);
int main(void)
{
    double arr[] = {
        5,
        3,
        4,
        67,
        8,
        2,
        4,
        10,
        5,
        3};
    int n = sizeof(arr) / sizeof(*arr) - 1;
    double minn = minnn(arr, n);
    cout << minn;
}
double minnn(double arr[], int n)
{
    if (n == 0)
    {
        return arr[n];
    }
    double minn = minnn(arr, n - 1);
    if (minn > arr[n])
    {
        minn = arr[n];
    }
    return minn;
}