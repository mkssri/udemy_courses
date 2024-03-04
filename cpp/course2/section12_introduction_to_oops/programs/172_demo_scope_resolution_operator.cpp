/***********************
author : murali sriram
date   : 03.03.2024
************************/
#include <iostream>

using namespace std;

class Rectangle
{
    private: // data hiding
        int length;
        int breadth;
    public:
        Rectangle ();
        Rectangle (int l, int b);
        Rectangle (Rectangle &r);
        int getLength () {return length;}
        int getBreadth () {return breadth;}
        void setLength (int l);
        void setBreadth(int b);
        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle();
};

int main() {
    
    Rectangle r1(10,10);
    cout << "Area " <<r1.area()<<endl;

    if(r1.isSquare())
        cout << "Yes" << endl;

    return 0;
}

Rectangle::Rectangle() 
{
    length  = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b) 
{
    length  = l;
    breadth = b;
}

Rectangle::Rectangle(Rectangle &r) 
{
    length  = r.length;
    breadth = r.breadth;
}

void Rectangle::setLength(int l) 
{
    length  = l;
}

void Rectangle::setBreadth(int b) 
{
    breadth  = b;
}

int  Rectangle::area() 
{
    return length*breadth;
}

int  Rectangle::perimeter() 
{
    return 2*(length+breadth);
}

bool Rectangle::isSquare()
{
    return length==breadth;
}

Rectangle::~Rectangle()
{
    cout << "Rectangle destroyed!!!" << endl;
}

/* 
 * generally functions are written following way:
 *
 * first: function prototypes.
 * next : main function.
 * next : function definitions.
 *
 * also at the end of main function destructor of object
 * rectangle is called :)
 */
