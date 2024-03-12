/**************************
 * author : murali sriram
 * date   : 03/12/2024
 * ***********************/

#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Default of Base" << endl;
    }
    Base(int x)
    {
        cout << "Param of base " << x << endl; 
    }
};

class Derived: public Base
{
public:
    Derived()
    {
        cout << "Default of derived" << endl;
    }
    Derived(int a)
    {
        cout << "Param of derived " << a << endl;
    }
    Derived(int a, int x) : Base(x)
    {
        cout << "Param of derived " << a << endl;
    }

};

int main()
{
    // following is the output as first Parent class default constructor is called
    // then the constructor of child class is called.
    /*
     * ❯ ./188
       Default of Base
       Default of derived
    */
    Derived d;

    // following is the output as first default constructor of base class is called
    // next parameter constructor of derived class is called
    /*
     * Default of Base
       Param of derived 10
    */
    Derived d1(10);


    // following is the output as first param constructor of base class is called
    // next parameter constructor of derived class is called
    /*
     * Param of base 20
       Param of derived 10
    */
    Derived d2(10,20);

    return 1;
}
/*
 * call    : means function is called
 * executed: means total definition is executed
*/
