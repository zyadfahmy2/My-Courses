// C++ program to demonstrate use of decltype in functions
#include <bits/stdc++.h>
using namespace std;

// A generic function which finds minimum of two values
// return type is type of variable which is minimum
template <class A, class B>
auto findMin(A a, B b) -> decltype(a < b ? a : b)
{
    return (a < b) ? a : b;
}

// driver function to test various inference
int main()
{
    // This call returns 3.44 of double type
    decltype(findMin(4, 3.44)) x = findMin(4, 3.44);
    cout << x;

    // This call returns 3 of double type
    // cout << findMin(5.4, 3) << endl;

    return 0;
}