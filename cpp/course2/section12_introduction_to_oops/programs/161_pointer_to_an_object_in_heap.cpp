/* POINTER TO OBJECT */
#include <iostream>

using namespace std;

class Rectangle
{
    public:
        int length;
        int breadth;

        int area()
        {
            return length*breadth;
        }

        int perimeter()
        {
            return 2*(length+breadth);
        }
};

int main()
{
    Rectangle  r;
    Rectangle *p;

    p = &r;

    r.length   = 10;
    p->length  = 10;
    p->breadth = 5;

    cout << p->area();
}
