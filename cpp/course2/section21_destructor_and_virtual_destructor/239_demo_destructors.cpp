 /**************************
  * author : murali sriram
  * date   : 04/30/2024
  * ***********************/

#include <iostream>
using namespace std;

/* constructor is used for initialization purposes, it is used for allocating resources
 * destructor is used for deallocating resources or releasing the resources */
/* dellallocate: external things, heat memory, file , network connection..etc. */
/* we cannot have multiple destructors , we will have only one */
/* when you are creating object dynamically/onheap destructor of function wont be CALLED   unless you manually write delete */
/* heap memory should be explicitly deleted is what we have learnt */

class Demo
{
    int *p;
public:

Demo()
{
    p = new int[10];
    cout<<"constructor of demo" << endl;
}

~Demo()
{
    delete []p;
    cout<<"destructor of demo" << endl;
}

};

void fun()
{
    Demo d;
}

void fun1()
{
    Demo* p = new Demo();
    delete p;
}

int main()
{
    fun();
    fun1();

    return 0;
}
