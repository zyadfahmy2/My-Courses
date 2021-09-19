#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    //checking the a or b are divisible by each other
    if(a%b == 0 || b%a == 0)
    cout<< "Multiples" << "\n";
    else
    cout<< "No Multiples" << "\n";
}