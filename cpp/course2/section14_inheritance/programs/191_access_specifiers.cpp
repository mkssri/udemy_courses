/**************************
 * author : murali sriram
 * date   : 03/13/2024
 * ***********************/

#include <iostream>

using namespace std;

class Base
{
private:
    int a;
protected:
    int b;
public:
    int c;
    void funBase()
    {
        // since this function is present in the class
        // it will have access to all datamembers from 
        // private and protected sections.
        a = 10;
        b = 20;
        c = 30;
    }
};

class Derived : Base // class Derived extends Base class
{
public:
    void funDerived()
    {
        // a = 1; // private member of class is not accessible in derived class

        b = 2; // protected member of class is accessible in derived class
        c = 3; // public member of class is accessible in derived class
    }

};

int main()
{
    // hasA relationship, you can access only public members of class
    Base x;

    
    // x.a = 15; // private member of object is not accessible
    // x.b = 30; // protected member of object is not accessible

    x.c = 90; // UPON an OBJECT we can only access PUBLIC members, private&protected members are not accessible

    cout << "x.c: " << x.c << endl;
    return 1;
}
/*
 * inside class: all type datamember's (public, private, & protected) are accessible.
 * in derived class: only protected and public data members of BASE class are accessible.
 * upon object: only public class is accessible.
 * 
 *
 *     ==========        ==========          ==========
 *     | MY CAR |        | YOUR   |          |        |   
 *     |        |        |    CAR |          | OBJECT |
 *     |        |        |        |          |        |
 *     ==========        ==========          ==========
 *
 *accessible:              
        public            public               public
        private           protected
        protected
 *
 *
 *
 *         # access specifier's table
 *
 *                                        public          protected           private
 *
 *         inside class                     YES              YES                YES
 *         
 *         inside derived class             YES              YES                 NO
 *
 *         on object                        YES              NO                  NO
 *
 *
 */
