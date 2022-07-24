#include <iostream>
using namespace std;
class Unary
{
private:
    int x, y;

public:
    Unary(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    void show()
    {
        cout << "x is : " << x << endl;
        cout << "y is : " << y << endl;
    }

    Unary operator-()
    {
        x = -x;
        y = -y;
        return *this;
    }
    bool operator!()
    {
        return (x == 0 && y == 0); // if the data fields have values it will return 0 and if they are 0 then it will return 1
    }
    void operator+=(Unary z)
    {
        x += z.x;
        y += z.x;
    }
};

int main(void)
{
    Unary v(1, 2), z(2, 2);
    v.show();
    -v;
    v.show();
    if (!v)
        cout << true;
    else
        cout << false;
    cout << endl;

    v += z;
    v.show();
}
