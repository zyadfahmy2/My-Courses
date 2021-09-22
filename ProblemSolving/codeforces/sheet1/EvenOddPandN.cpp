#include <iostream>
using namespace std;

//#include <bits/stdc++.h>

int main(void)
{
    int n, ecount = 0, ocount = 0, pcount = 0, ncount = 0;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i ++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++)
    {
        if(arr[i] % 2 == 0 )
            ecount++;
        else
            ocount++;
        if(arr[i] > 0)
            pcount++;
        else if(arr[i] < 0)
            ncount ++;
        
    }
    cout<< "Even: " << ecount <<"\n";
    cout << "Odd: " << ocount;
    cout << "\nPositive: " << pcount;
    cout << "\nNegative: " << ncount;
}
