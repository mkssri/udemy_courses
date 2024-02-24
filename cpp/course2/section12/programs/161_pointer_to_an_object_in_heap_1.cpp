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
    Rectangle *p;

    p            = new Rectangle;
    Rectangle *q = new Rectangle();

    p->length  = 15;
    p->breadth = 10;
    cout << p->area();
    
    return 1;
}
/*
Rectangle r; // assigned in the stack
Rectangle *p = new Rectangle(); // assigned in heap
*/
