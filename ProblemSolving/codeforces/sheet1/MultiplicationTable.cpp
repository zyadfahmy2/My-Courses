#include <iostream>
using namespace std;

//printing the multiplication table based on the input of the user

int main(void)
{
    int x;
    cin >> x;
    for (int i = 1 ; i <= 12 ; i++)
    {
        cout << x << " * " << i << " = " << x * i << "\n";
    }
}
