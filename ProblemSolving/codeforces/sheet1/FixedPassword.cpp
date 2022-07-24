#include <iostream>
using namespace std;

//#include <bits/stdc++.h>

int main(void)
{
    int password = 0;
    
    while(true)
    {
        cin>>password;
        if(password != 1999)
            cout<<"Wrong\n";
        else
            break;
    }
    cout<<"Correct";
}
