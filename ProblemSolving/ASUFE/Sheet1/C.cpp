#include <iostream>
using namespace std;
int main(void)
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i)
    {
        if (i <= 9)
        {
            switch (i)
            {
            case 1:
                cout << "one"
                     << "\n"
                     << "\n";
                break;
            case 2:
                cout << "two"
                     << "\n"
                     << "\n";
                break;
            case 3:
                cout << "three"
                     << "\n"
                     << "\n";
                break;
            case 4:
                cout << "four"
                     << "\n"
                     << "\n";
                break;
            case 5:
                cout << "five"
                     << "\n"
                     << "\n";
                break;
            case 6:
                cout << "six"
                     << "\n"
                     << "\n";
                break;
            case 7:
                cout << "seven"
                     << "\n"
                     << "\n";
                break;
            case 8:
                cout << "eight"
                     << "\n"
                     << "\n";
                break;
            case 9:
                cout << "nine"
                     << "\n"
                     << "\n";
                break;
            }
        }
        if (i > 9)
        {
            if (i % 2 == 0)
                cout << "even"
                     << "\n"
                     << "\n";
            else
                cout << "odd"
                     << "\n"
                     << "\n";
        }
    }
}