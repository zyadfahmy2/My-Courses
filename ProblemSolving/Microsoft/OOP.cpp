#include <iostream>
using namespace std;
class list
{
public:
    int a, b, c;
    list();
};
list::list() : c(1), b(2), a(3) // initializer list does not work with const
{
}
int main(void)
{
    list l;
    cout << l.a << l.b << l.c;
}