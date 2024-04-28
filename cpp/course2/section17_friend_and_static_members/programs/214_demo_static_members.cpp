 /**************************
  * author : murali sriram
  * date   : 04/26/2024
  * ***********************/

#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    static int count; // static: comman data member to all the objects

    Test()
    {
        a = 10;
        count++;
    }

    static int getCount()
    {
        // a++; // you cannot use non static members inside the STATIC functions
        return count;
    }

};

int Test::count = 0;

int main()
{
    Test t1, t2;
    cout << t1.count<<endl;
    cout << t2.count<<endl;

    t1.count = 25; //chanaging the value of count

    cout << t2.count<<endl; // this means there is a single count object for both objects t1,t2
    cout << Test::count << endl; // static datamembers: can be accessed using classes and objects also

    cout << Test::getCount() << endl;
    cout << t1.getCount() << endl;
// so static funtions can be called upon a object or upon a class
// so static member belong to the class but not to the object
    return 0;
}
