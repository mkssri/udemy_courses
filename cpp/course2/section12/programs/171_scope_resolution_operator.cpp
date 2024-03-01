/***********************
author : murali sriram
date   : 03.01.2024
************************/

#include <iostream>

using namespace std;

class Rectangle {
    
    private:
        int length;
        int breadth;
    
    public:
        /* constructor */
        Rectangle();
        Rectangle(int l, int b) {
            length  = l;
            breadth = b;
        }
        Rectangle(Rectangle &r);

        /* mutator */
        void setLength(int l);
        void setBreadth(int b);

        /* accessor */
        int getLength();
        int getBreadth();

        /* facilitator */
        int area() {
            return length*breadth;
        }
        int perimeter();

        /* enquiry */
        int isSquare();

        /* destructor */
        ~Rectangle();
};

// :: -> it is called as scope resolution operator
int Rectangle::perimeter() {  // returnType className::functionName(args) {}
    return 2*(length+breadth);
}

int main() {


}


/*
 * scope resolution operator tells that scope of the function is within this
 * class.. :)
 *
 * there are 2 ways to write function's:
 * 1. write function prototype in class and eloborate the function inside the class only.
 * 2. write function prototype in in class and eloborate the function outside the class
 *    via scope resolution operator( "::" ).
 */
