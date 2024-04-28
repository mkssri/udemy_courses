 /**************************
  * author : murali sriram
  * date   : 04/26/2024
  * ***********************/

#include <iostream>
using namespace std;

/*
 * inner class can only access static members
 * it cannot access non-static members
 *
 */

class Outer 
{
public:
    void func()
    {
        i.display();
    }
    class Inner
    {
    public:
        void display()
        {
            cout << "Display of Inner" << endl;
        }

    };
    Inner i;
};

int main()
{

}
/* outer class creating an object of inner class
 * and the function of outer class is using the object
 *
 * so outer class can have inner/nested classes
 * and outer class can use the objects of inner class.
 */
