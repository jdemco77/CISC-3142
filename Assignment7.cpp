#include <stdio.h>
#include <iostream>
using namespace std;

class Rectangle
{

private:
    float length;

private:
    float width;

    // constructors
public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

public:
    Rectangle()
    {
        length = 0;
        width = 0;
    }

public:
    Rectangle(float l)
    {
        length = l;
        width = 0;
    }

    // setters
    void setLength(float l)
    {
        length = l;
    }
    void setWidth(float w)
    {
        width = w;
    }

    // operations
    float perimeter()
    {
        float perimeter = 2 * (length + width);

        return perimeter;
    }

    float area()
    {
        float area = length * width;
        return area;
    }
    void show()
    {
        cout << "length of rectangle is " << length << endl;
        cout << "width of rectangle is " << width << endl;
    }
    int sameArea(Rectangle r)
    {
        float area1 = area();
        float area2 = r.length * r.width;
        if (area1 == area2)
        {
            return 1;
        }
        return 0;
    }
}; // end rectangle struct

int main(int argc, char const *argv[])
{
    Rectangle r1 = Rectangle(5, 2.5);
    Rectangle r2 = Rectangle(5, 18.9);

    r1.show();
    r2.show();

    cout << "area of rectangle 1: " << r1.area() << endl;
    cout << "area of rectangle 2: " << r2.area() << endl;
    cout << "perimeter of rectangle 1: " << r1.perimeter() << endl;
    cout << "perimeter of rectangle 2: " << r2.perimeter() << endl;

    float area1 = r1.area();
    float area2 = r2.area();

    if (area1 == area2)
    {
        cout << "the area of the two rectangles is equal" << endl;
    }
    else
    {
        cout << "the area of the two rectangles is not equal" << endl;
    }

    r1.setLength(15);
    r1.setWidth(6.3);

    float newArea1 = r1.area();

    cout << "area of rectangle 1: " << r1.area() << endl;
    cout << "area of rectangle 2: " << r2.area() << endl;
    cout << "perimeter of rectangle 1: " << r1.perimeter() << endl;
    cout << "perimeter of rectangle 2: " << r2.perimeter() << endl;

    if (newArea1 == area2)
    {
        cout << "the area of the two rectangles is equal" << endl;
    }
    else
    {
        cout << "the area of the two rectangles is not equal" << endl;
    }

    return 0;
}