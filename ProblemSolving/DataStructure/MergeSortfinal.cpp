#include <iostream>
using namespace std;
void merge(double x1[], int left1, int right1, int left2, int right2, double x[], int left);
void mergeSort(double arr[], double y[], int l, int r);
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

void merge(double x1[], int left1, int right1, int left2, int right2, double x[], int left)
{
    int i = left1, j = left2, k = left;
    while (i <= right1 && j <= right2)
    {
        if (x1[i] <= x1[j])
        {
            x[k++] = x1[i++];
        }
        else
            x[k++] = x1[j++];
    }

    while (i <= right1)
    {
        x[k++] = x1[i++];
    }

    while (j <= right2)
    {
        x[k++] = x1[j++];
    }
}
void mergeSort(double arr[], double y[], int l, int r)
{
    if (l == r)
    {
        y[l] = arr[l];
        return;
    }
    int mid = (l + r) / 2;
    double *z = new double(r + 1);
    mergeSort(arr, z, l, mid);
    mergeSort(arr, z, mid + 1, r);
    merge(z, l, mid, mid + 1, r, y, l);
}