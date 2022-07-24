#include <iostream>
using namespace std;
class Box
{
private:
    int l, b, h;

public:
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    // Box(Box b)
    // {
    //     l = b.l;
    //     b = b.b;
    //     h = b.h;
    // }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long)l * b * h; // put integers in long?
    }
    bool operator<(Box b2)
    {
        return ((l < b2.l) || (b < b2.b && l == b2.l) || (h < b2.h && b == b2.b && l == b2.l))
        
            
      
        
            
    }
    friend ostream &operator<<(ostream &output, Box b1)
    {
        output << b1.l << b1.b << b1.h;
        return output;
    }
};
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
}