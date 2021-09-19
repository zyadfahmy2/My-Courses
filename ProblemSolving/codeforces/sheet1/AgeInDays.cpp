#include <iostream>
using namespace std;
#include <cstring>

//calculating years months and days given number
int main(void)
{
    int n;
    int year = 0, month = 0, days = 0;
    cin >> n;
    while (n - 365 >= 0)
    {
        n-=365;
        year++;
    }
    while (n - 30 >= 0)
    {
        n-=30;
        month++;
    }
    while (n - 1 >= 0)
    {
        n--;
        days++;
    }

    cout << year << " years\n";
    cout << month << " months\n";
    cout << days << " days\n";

    
    
    
}