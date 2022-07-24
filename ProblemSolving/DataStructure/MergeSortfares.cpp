#include <iostream>

using namespace std;
void merg(int *a, int *b, int c, int s1, int s2, int s3, int e1, int e2);
void mergsort(int a[], int b[], int s, int e);

int main()
{
    int a[] = {6, 3, 33, 7};
    int c[4];
    mergsort(c, a, 0, 3);
    for (int i = 0; i < 4; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}

void merg(int a[], int b[], int c[], int s1, int s2, int s3, int e1, int e2)
{
    int i1 = s1, i2 = s2, i3 = s3;
    while ((i1 <= e1) && (i2 <= e2))
    {
        if (a[i1] <= b[i2])
        {
            c[i3++] = a[i1++];
        }
        if (b[i2] < a[i1])
        {
            c[i3++] = b[i2++];
        }
    }

    while (i1 <= e1)
    {
        c[i3++] = a[i1++];
    }

    while (i2 <= e2)
    {
        c[i3++] = b[i2++];
    }
}

void mergsort(int a[], int b[], int s, int e)
{
    if (s == e)
    {
        a[s] = b[s];
        return;
    }
    int mid = (e + s) / 2;
    int *z = new int[e + 1];

    mergsort(z, b, s, mid);
    mergsort(z, b, mid + 1, e);

    merg(z, z, a, s, mid + 1, s, mid, e);
}