/**************************
 * author : murali sriram
 * date   : 03/24/2024
 * ***********************/

#include <iostream>

using namespace std;

/* class Base
{
public:
    void fun()
    {
        cout << "fun of Base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun()
    {
        cout << "fun of Derived" << endl;
    }
};

int main()
{
    Base* ptr = new Derived();
    ptr->fun();

    return 0;
}*/

/*
❯ g++ 205_demo_1_virtual_functions.cpp -o 205
❯ ./205
fun of Base
*/

class Base
{
public:
    virtual void fun()
    {
        cout << "fun of Base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun()
    {
        cout << "fun of Derived" << endl;
    }
};

int main()
{
    Base* ptr = new Derived();
    ptr->fun();

    return 0;
}
/*
❯ g++ 205_demo_1_virtual_functions.cpp -o 205
❯ ./205
fun of Derived
*/
