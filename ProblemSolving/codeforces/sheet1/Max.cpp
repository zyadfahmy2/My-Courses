#include <iostream>
using namespace std;

//printing the max number out of a limited numbers

int main(void)
{
    int n, max, x;
    bool z = true;
    //getting the numbers of inputs
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        cin >>x;
        if(z)
        {
            max = x;
            z = false;
        }
        else if(max < x)
            max = x;

    }
    cout << max;
}
