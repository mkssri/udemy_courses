/**************************
 * author : murali sriram
 * date   : 04/21/2024
 * ***********************/

#include <iostream>

using namespace std;

class Base
{
public:
    void display()
    {
        cout << "Display of Base " << endl;
    }
};

class Derived:public Base
{
public:
    void display( int x )
    {
        cout << "Display of Derived" << endl;
    }

};

int main()
{

    Derived d;
    // d.display(); //too few arguments to function call, expected 1, have 0; did you mean 'Base::display'?

    d.Base::display();
}
/*
 * when you are overriding make sure signature
 * or prototype of function is as it is SAME
 * else it would become function "OVERLOADING"
 */
