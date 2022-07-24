#include <iostream>
using namespace std;
int bin(int n)
{
    if(n == 1)
        return 1;
    return bin(n/2) + 1;
}
int main(void)
{
    cout<< bin(2);
}