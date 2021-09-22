#include <iostream>
using namespace std;


//calculating years months and days given number
int main(void)
{
    float x;
    cout<<"Interval ";
    if(x == 25 || x == 0 || x == 50 || 75)
    {
        cout << "[";
    }
    else
    cout << "(";

    if(x >= 0 && x < 25)
    cout << "0,25";
    else if(x >= 25 && x < 50)
    cout << "25,50";
    else if(x >= 50 && x < 75)
    cout << "50,75";
    else if(x >= 75 && x < 100)
    cout << "75,100";
    cout<<"]";
    
    
    
}