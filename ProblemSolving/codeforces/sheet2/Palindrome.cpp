#include <iostream>
using namespace std;

//calculating factorial number based on the input of the user
#include <cmath>
int main(void)
{
    long long n = 0, count, x = 1, temp, temporary;
    cin >> n;
    temporary = n;
    // avoiding non zero leading digit

    while (n % 10 == 0)
    {
        n /= 10;
    }

    temp = n;

    // getting the number of digits and getting the unit of the number if it is hundreds for example or more using x
    while (temp / 10 != 0)
    {
        x = x * 10;
        temp /= 10;
        count++;
    }
    //  cout << x << "n is  " << n << endl;
    count++;
    long long number = 0;

    for (int i = 0; i < count; i++)
    {
        //32 = 30*10 + 2*1
        number += n % 10 * x;
        x /= 10;
        n /= 10;
    }
    cout << number << "\n";
    if (number == temporary)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}
