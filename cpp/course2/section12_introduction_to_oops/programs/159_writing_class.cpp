/*

- by default whatever you write in class becomes private
- so you need to assosiate them with public, private, protected
  access specifiers.

*/
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

int main( )
{

    Rectangle r1, r2;

    r1.length  = 10;
    r1.breadth = 5;

    cout << "area: " << r1.area() << endl;
    cout << "perimeter: " << r1.perimeter() << endl;

    return 0;

}

/*
 
         ==========================
                                       
                                    HEAP

         =========================

          it will have objects
          r1 & r2
                                    STACK             


         =========================
          
         it will have variables,
         functions.

                                   CODE 


        =========================

*/
