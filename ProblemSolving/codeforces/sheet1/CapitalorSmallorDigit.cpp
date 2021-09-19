#include <iostream>
using namespace std;


int main(void)
{
    char c;
    cin>>c;
    if(c-48 <= 9 )
    {
        cout << "IS DIGIT\n";
    }

    if (c >= 65 && c <= 123)
    {
        cout<< "ALPHA\n";
        if (c<=96)
        {
            cout<< "IS CAPITAL\n";
        }
        else
        cout << "IS SMALL";
    }

    

}