/***********************
author : murali sriram
date   : 03.03.2024
************************/
#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;

    public:
        // if constructor is written like below
        // then compiler gets confused if function
        // local variables length & breadth are being
        // assigned to same local variables or something ?
        // so we use this-> pointer here, so that way we
        // can state object->variable is being assigned to
        // local variable from function. wow!
        /*Rectangle(int length, int breadth)
        {
            length  = length;
            breadth = breadth;
        }*/

        Rectangle(int length, int breadth)
        {
            this->length  = length;
            this->breadth = breadth;
        }

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
    Rectangle r1(10,5);

    cout << r1.area() << endl;

    return 0;
}
/*
 * this-> pointer is useful concept in c++
 * using this pointer we can reference to
 * members of a current object.
 */
