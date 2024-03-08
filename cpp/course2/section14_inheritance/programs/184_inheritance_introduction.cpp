/**************************
 * author : murali sriram
 * date   : 03/07/2024
 * ***********************/

#include <iostream>

using namespace std;

class Base
{
public:
    int x;
    void show()
    {
        cout << x <<endl;
    }
};

/* : is useful to show it is extension of a class
   Here Derived class is extending from the Base
   class
*/
class Derived : public Base 
{
public:
    int y;
    void display()
    {
        cout << x << " " << y;
    }
};

int main()
{
    Base b;
    b.x = 25;
    b.show();

    Derived d;
    d.x = 10;
    d.y = 15;
    d.show();
    d.display();

    return 0;
}


/*************************************************
 *
 *
 *           ___________                  _____________
 *          |          |                 |             |
 *          |   BASE   | <-------------  |   DERIVED   |
 *          ------------                 --------------
 *
 *          above is diagramatic representation, to show Derived class
 *          is inheriting from the BASE class.
 *  Here we learned how get existing features from Base class to derived class
 *  which is nothing but inheritance.
 *
 **************************************************/
