/**************************
 * author : murali sriram
 * date   : 03/13/2024
 * ***********************/

#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    // accessors
    int getLength()
    {
        return this->length;
    }
    int getBreadth()
    {
        return this->breadth;
    }

    // mutators
    void setLength(int l)
    {
        if(l>0)
        this->length = l;
        else
        this->length = 1;
    }
    void setBreadth(int b)
    {
        if(b>0)
        this->breadth = b;
        else
        this->breadth = 1;
    }

    int area()
    {
        return this->length*this->breadth;
    }
    int perimeter()
    {
        return 2*(this->length+this->breadth);
    }

};

int main()
{
    Rectangle r1;

    /* private members of class
     * cannot be accessed upon a object.
    r1.length  = 10;
    r1.breadth = 5;
    */

    r1.setLength(10);
    r1.setBreadth(5);

    cout << "area: " << r1.area() << endl;
    cout << "length: " << r1.getLength() << endl;
    cout << "breadth: " << r1.getBreadth() << endl;

    return 0;
}

/*
 *
 * as per principles of object oriented programming:
 * - data should be stored as private
 * - so in order to access these private variables we use
 *   getters and setters, this is called DATA HIDING.
 *
 *
 */
