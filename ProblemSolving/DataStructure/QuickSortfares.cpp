#include <iostream>

using namespace std;
void printt(int *a, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << "\t";
    }
}

void swapp(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    int pivoit;
    pivoit = a[mid];
    swapp(&a[s], &a[mid]);
    //printt(a, 5);

    int i = s + 1;
    int j = e;

    while (i <= j)
    {
        while (a[i] <= pivoit && i <= e)
        {
            i++;
        }
        while (a[j] > pivoit && j >= s + 1)
        {
            j--;
        }

        if (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    swapp(&a[s], &a[j]);
    quicksort(a, s, j - 1);
    quicksort(a, j + 1, e);
}

int main()
{

    int a[] = {11, 4, 22, 5, 30};
    quicksort(a, 0, 4);
    printt(a, 5);

    return 0;
}