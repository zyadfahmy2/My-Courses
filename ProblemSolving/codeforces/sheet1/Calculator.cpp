#include <iostream>
using namespace std;
#include <cstring>

//doing mathmatical equation depending on the operator
int main(void)
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    if (s == '+')
    cout << (a + b) << "\n";
    else if (s == '-')
    cout << a - b << "\n";
    else if (s == '*')
    cout << a * b << "\n";
    else
    cout << a / b << "\n";
}