#include <iostream>
using namespace std;

int count = 0;
int main(void)
{
    short n, a, b;
    int result = 0;
    cin >> n >> a >> b;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int z = i;
        while (z != 0)
        {
            result += z % 10;
            z /= 10;
            //cout << "result is : " << result << " i is " << i << endl;
        }
        if (result >= a && result <= b)
        {

            sum += i;
        }
        result = 0;
    }
    cout << sum;
}
