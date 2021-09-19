#include <iostream>
using namespace std;


int main(void)
{

    string s1, s2 , b1, b2;
    // taking peoples names till the second name and then checking if they are brothers or not
    cin >> s1 >> s2 >> b1 >> b2 ;
    if (s2.length() != b2.length())
    {
        cout<< "NOT" << "\n";
        return 0;
    }
    for (int i = 0; i < s2.length() ; i++)
    {
        if (s2[i] != b2[i])
        {
            cout<< "NOT" << "\n";
            return 0;
        }
        
        
    }
    cout << "ARE Brothers\n";
    
    

}