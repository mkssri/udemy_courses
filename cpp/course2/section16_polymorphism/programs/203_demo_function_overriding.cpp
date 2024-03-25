/**************************
 * author : murali sriram
 * date   : 03/24/2024
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
    void display()
    {
        cout << "Display of Derived" << endl;
    }

};

int main()
{
    Base b;
    b.display();

    Derived d;
    d.display();

    d.Base::display();
}
/*
 * when you are overriding make sure signature
 * or prototype of function is as it is SAME
 * else it would become function "OVERLOADING"
 */
