#include <iostream>
using namespace std;

//calculating factorial number based on the input of the user

int main(void)
{
    int x;
    long long n;
    //prompt the user to enter the number of test cases
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        //the number that we will calculate its factorial
        cin >> n;
        int z = n; // we want to put a limit to a loop that is constant and does not change so we can't put n
        if (n == 0)
        {
            cout << 1 << "\n";
            continue;
        }
        for (int j = 2; j < z; j++)
        {
            n *= j;
        }
        cout << n << " \n";
    }
}
