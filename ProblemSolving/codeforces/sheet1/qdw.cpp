#include <iostream>
using namespace std;
template <typename T>
struct func
{
    void x()
    {
        cout << "hi" << endl;
    }
    void y()
    {
        cout << "hello";
    }
};
template <>
void func<int>::x()
{
    cout << "hello world";
}

// class Point
// {
//     int x, y;

// public:
//     Point(int i, int j)
//     {
//         x = i;
//         y = j;
//     }
//     int getX()
//     {
//         return x;
//     }
// };
// fun3(int arr[])
// {
//     max = INT_MIN;
//     max_end = 0;
//     n = sizeof(arr) / sizeof(*arr);
//     for (int i = 0; i < n; i++)
//     {
//         max_end = max_end + arr[i];
//         if (max < max_end)
//             max = max_end;
//         if (max_end < 0)
//             max_end = 0;
//     }
//     return max;
// }
function1(int input1)
{
    if (input1 == 0 || input1 == 1)
        return 1;
    return function1(input1 - 1) * (2 * function1(input1 - 2) + function1(input1 - 1));
}
fun2(int one, int two)
{
    if (two == 0)
    {
        return one;
    }
    return fun2(two, one % two);
}
fun1(int one, int two)
{
    int result;
    result = (one * two) / fun2(one, two);
    return result;
}

try1(int input1, int input2)
{
    if (input1 == input2)
        return input1;
    else if (input1 > input2)
        return try1(input1 - input2, input2);
    else
        return try1(input1, input2 - input1);
}

int main(void)
{
    // cout << function1(3);
    // // cout<< fun3()
    // func<int> t;
    // t.x();
    // t.y();
    // cout << try1(16, 28);
    // cout << fun1(36, 24);
    //  Point t;
    //  cout << t.getX();
    //  cout << function1(3);
    //  int a = 7;
    //  int &b = a;
    // int a, b;
    // a = 10, 20, 30;
    // b = (30, 20, 10);
    // cout << a + b;
    //  return 0;
    //  cout << &a << &b;
    int a = 0, b = 0;
    int n = 4;
    int arr[n][n] = {{5, 6, 7, 8}, {9, 4, 2, 5}, {1, 2, 3, 4}, {7, 8, 9, 0}};
    for (int i = 0; i < n; i++)
    {
        a += arr[i][i];
        b += arr[i][n - i - 1];
    }
    if (a > b)
        cout << a - b;
    else
        cout << b - a;
    // unsigned char a, b;
    // a = 5;
    // b = 6;

    // a = a & b;
    // b = b | a;
    // a = a ^ b;
    // b = b << 1;
    // a = a << 1;
    // unsigned ans = a & b;
    // cout << ans;
}