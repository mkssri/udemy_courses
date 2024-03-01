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
        Rectangle(int l, int b);
        Rectangle(Rectangle &r);

        /* mutator */
        void setLength(int l);
        void setBreadth(int b);

        /* accessor */
        int getLength();
        int getBreadth();

        /* facilitator */
        int area();
        int perimeter();

        /* enquiry */
        int isSquare();

        /* destructor */
        ~Rectangle();
};


/*
 * above in class definition we just write prototypes
 * and classes are expaneded/eloborated outside the definition 
 * via scope resolution operator.
 */
