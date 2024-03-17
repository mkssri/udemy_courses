/**************************
 * author : murali sriram
 * date   : 03/16/2024
 * ***********************/

#include <iostream>
using namespace std;

class Parent
{
private:
    int a;
protected:
    int b;
public:
    int c;

    void funParent()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};

/*
 * here variable c which is public in Parent class will also become
 * protected in the child class as it was inherited using protected
 * keyword
 */
class Child: protected Parent
{
public:
    void funChild()
    {
        // a = 10; // private member of parent is not accessible, hence i commented it out.
        b = 5;
        c = 15;
    }

};

class GrandChild : public Child
{
public:
    void funGrandChild()
    {
        // a = 10; // private member of Child is not accessible, hence i commented it out.
        b = 5;
        c = 15;
    }
};

int main()
{
    Child c;
    // c.a = 10; // private data member, a is not accessible, hence commented it out 
    // c.b = 5;  // protected data member, a is not accessible, hence commented it out
    c.c = 15;

    return 0;
}

/*
 * Inherited class can derive from base class in 3 ways:
 * 1. public
 * 2. private
 * 3. protected
 *
 *
 * If inheriting through "public" way:
 * - all members of parent class are taken into child class the same way they are present
 *   meaning: public members as public, private members as private and protected members as protected.
 *
 *
 */
