#include <iostream>
using namespace std;
void mergeSort(double arr[], double y[], int left, int right);
void merge(double x[], int left1, int right1, int left2, int right2, double z[], int left);
int main(void)
{
    double arr[] = {1, 4, 3, 1, 9, 6, 10};

    double arr1[7];
    mergeSort(arr, arr1, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << arr1[i] << " ";
    }
}

void merge(double x[], int left1, int right1, int left2, int right2, double z[], int left)
{
    int i1 = left1;
    int i2 = left2;
    int i = left;
    while (i1 <= right1 && i2 <= right2)
    {
        if (x[i1] <= x[i2])
        {
            z[i++] = x[i1++];
        }
        else
            z[i++] = x[i2++];
    }
    while (i1 <= right1)
    {
        z[i++] = x[i1++];
    }
    while (i2 <= right2)
    {
        z[i++] = x[i2++];
    }
}
void mergeSort(double arr[], double y[], int left, int right)
{
    if (left == right)
    {
        y[left] = arr[left];
        return;
    }
    int mid = (left + right) / 2;
    double *z = new double(right + 1);
    mergeSort(arr, z, left, mid);
    mergeSort(arr, z, mid + 1, right);
    merge(z, left, mid, mid + 1, right, y, left);
}