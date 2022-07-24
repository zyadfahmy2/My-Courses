#include <iostream>
using namespace std;
class Rectangle
{
private:
    double length, width;

public:
    Rectangle(double l = 0, double w = 0)
    {
        length = l;
        width = w;
    }

    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
    void setLength(double l)
    {
        length = l;
    }
    void setWidth(double w)
    {
        width = w;
    }
    double getArea()
    {
        if (length < 0 || width < 0)
            return 0;
        return length * width;
    }
};
int main(void)
{
    Rectangle r;
    r.setLength(10);
    r.setWidth(10);
    cout << "the length is: " << r.getLength() << endl;
    cout << "the Width  is: " << r.getWidth() << endl;
    cout << "the Area is: " << r.getArea() << endl;
}
