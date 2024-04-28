/**************************
 * author : murali sriram
 * date   : 04/21/2024
 * ***********************/

/* ABSTRACT CLASS 
 * PURE VIRTUAL FUNCTION
 * */

/*
 * IN C++ we can write 3 types of classes based on the following:
 *
 * 1. Base Class (All concrete functions) : sole purpose re-usability (for child class)
 * 2. Base class (some concrete functions and some pure virtual functions) : purpose resuability and polymorphism : absract class
 * 3. Base class (only pure virtual functions) : only puporse of this base class is for polymorphism == this is also called as INTERFACE/Abstract class
 *    only purpose of this class is to acheive polymorphism hence it is called the interface ckass
 * 4. c++ supports multiple inheritance
 * 5. If a class has pure virtual functions then it is called abstract class.
 * 6. If a class inherits from a abstract class then it also becomes abstract class.
 * 7. abstract classes have 2 reasions they can help in resuability as well as acheving        polymorphism 
 * 8. if absrract class is fully useful for polymorphism such an abstract class can be called
 * as INTERFACE.
 *
 */


#include <iostream>

using namespace std;

/* abstract class/interface class */
class Base
{
public:
    /* pure virtual functions */
    virtual void fun1() = 0;
    virtual void fun2() = 0;
};

class Derived : public Base
{
public:
    void fun1()
    {
        cout << "fun1 of Derived class" << endl;
    }
    void fun2()
    {
        cout << "fun2 of Derived class" << endl;
    }
};

int main()
{
    Base* ptr = new Derived();
    ptr->fun1();
    ptr->fun2();
    return 0;
}
