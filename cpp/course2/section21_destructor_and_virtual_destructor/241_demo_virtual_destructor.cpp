 /**************************
  * author : murali sriram
  * date   : 04/30/2024
  * ***********************/

#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "constructor of base class called" << endl;
    }
    virtual ~Base()
    {
        cout << "Destructor of base class called" << endl;
    }
    /*
     *  after adding virtual to destructor output changes to below :)
     *  constructor of base class called
        constructor of derived class called
        Destructor of derived class called
        Destructor of base class called
     *
     */
};

class Derived:public Base
{
public:
    Derived()
    {
        cout << "constructor of derived class called" << endl;
    }
    ~Derived()
    {
        cout << "Destructor of derived class called" << endl;
    }

};

int main()
{
    // Derived d = Derived();
    /*
     *
     * constructor of base class called
       constructor of derived class called
       Destructor of derived class called
       Destructor of base class called*/

    Base* ptr =new Derived();
    delete ptr;
/*
 * constructor of base class called
   constructor of derived class called
   Destructor of base class called*/
}
