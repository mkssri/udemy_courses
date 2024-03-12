/**************************
 * author : murali sriram
 * date   : 03/12/2024
 * ***********************/

#include <iostream>

using namespace std;

class Base
{
public:
    Base(){ cout << "non parameterized constructor of BASE class" << endl; }
    Base(int x){ cout << "parameterized constructor of BASE class " << x <<  endl; }
};

class Derived : public Base
{
public:
    Derived(){ cout << "non parameterized constructor of DERIVED class" << endl; }
    Derived(int a){ cout << "parameterized constructor of DERIVED class " << a <<  endl; }
    Derived(int x, int a):Base(x)
    { 
        cout << "parameterized constructor of DERIVED class " << a <<  endl; 
    }
};

int main()
{
    Derived d1;
    Derived d2(10);
    Derived d3(20,10);
    return 1;
}
/*
 * output:
 * non parameterized constructor of BASE class
   non parameterized constructor of DERIVED class
   non parameterized constructor of BASE class
   parameterized constructor of DERIVED class 10
   parameterized constructor of BASE class 20
   parameterized constructor of DERIVED class 10
 *
 * so calling functions is from derived class to base class
 * where as execution is from base class to derived class.
 */
