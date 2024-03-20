/**************************
 * author : murali sriram
 * date   : 03/20/2024
 * ***********************/

#include <iostream>

using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "fun1 of Base" << endl;
    }
};

class Derived: public Base
{
public:
    void fun2()
    {
        cout << "fun2 of Derived" << endl;
    }
};

/*int main()
{
    Derived d;
    d.fun1(); // OK
    d.fun2(); // OK

    return 0;
}*/

/*int main()
{
    Derived d;
    Base *ptr = &d; // BASE CLASS ptr pointing to DERIVED class object
    ptr->fun1(); // OK
    // ptr->fun2(); // NOT OK (error: no member named 'fun2' in 'Base'; did you mean 'fun1'?)

    return 0;
}*/

int main()
{
    Base b;
    // Derived* ptr = &b; // NOT OK (error: cannot initialize a variable of type 'Derived *' with an rvalue of type 'Base *') 

    return 0;
}
