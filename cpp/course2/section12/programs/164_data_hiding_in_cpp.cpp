#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;


    public:
        void setLength ( int l ) {
            if ( l>1  ) {
                length = l;
            }
            else {
                std::cout << "length cannot be negative, so setting to default value" << std::endl;
                length = 1;
            }
        }
        void setBreadth ( int b ) {
            if ( b>1 ) {
                breadth = b;
            }
            else {
                std::cout << "breadth cannot be negative, so setting to default value" << std::endl;
                breadth = 1;
            }
        }
        int getLength () {
            return length;
        }
        int getBreadth () {
            return breadth;
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

int main( )
{
    Rectangle r;

    r.setLength(10);
    r.setBreadth(-5);
    std::cout << r.area() << std::endl;

    std::cout << "Length is " << r.getLength() << std::endl;

    return 0;

}
/*
 
For each datamember we wrote 2 public function's which are:
    1. getXXXX : will give the value of the datamember : This function is called ACCESSOR.
    2. setXXXX : will set the value of the datamember  : This function is called MUTATOR.
    // Together above functions are called PROPERTY FUNCTIONS, because datamembers are called PROPERTY
    // and functions for the PROPERTY are called PROPERTY FUNCTIONS.

    For any Datamember if we have both getXXXX & setXXXX function's then the datamember has
    read and write access to it.

    For any Datamember if we have only getXXXX function then the datamember has
    read only access to it.

    For any Datamember if we have only setXXXX function then the datamember has
    write only access to it. IT IS A SECRET, DON'T READ IT, JUST WRITE to it :)
    never read it!! seceret value & secret key.

    WHAT WE HAVE LEARNT ???
    - what is the objective or meaning of DATA HIDING ? why do we want to hide the data ?
    - if we make the data hidden then what problem we face ?
    - we wrote get functions and set functions to read and write to data ?

*/
