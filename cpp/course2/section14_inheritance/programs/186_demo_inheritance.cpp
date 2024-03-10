/**************************
 * author : murali sriram
 * date   : 03/09/2024
 * ***********************/

#include <iostream>

using namespace std;

class Base
{
public:
    int a;
    void display()
    {
        cout << "Display of Base. value of a: " << a << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Show of Derived" << endl;
    }
};

int main()
{
    Base b;
    b.display();

    Derived d;
    d.display(); // the child class getting the "display" method from its Base class 

    d.show();
}

/*
 *
 *  Inheritance: the child class gets info from the derived class
 *
 */
