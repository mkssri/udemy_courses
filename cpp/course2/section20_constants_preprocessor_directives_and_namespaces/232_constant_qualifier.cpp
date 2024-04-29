 /**************************
  * author : murali sriram
  * date   : 04/29/2024
  * ***********************/

#include <iostream>
using namespace std;

//int main()
//{
    /*
    const int x = 10;
    x++; // cannot assign to variable 'x' with const-qualified type 'const int'
    when a constant integer is declared we cannot modify it.
    we can use x, but we cannot modify x.
    */

    /*
    int x    = 10;
    int* ptr = &x;

    ++*ptr;
    cout << *ptr << " " << x << endl;
    */

    /* 
        cont int x    = 10;
        const int* ptr = &x;

        ++*ptr; // we cannot modify as it is pointing to integer constant
        cout << *ptr << " " << x << endl;
     */

     /*int x    = 10;
     int const *ptr = &x;
        
     int y    = 20;
     ptr = &y;     
     cout << *ptr << " " << *ptr++ << endl; // *ptr++ = ERROR
     */
    

     /*int x    = 10;
     int* const ptr = &x;
        
     int y    = 20;
     ptr = &y; // cannot assign to variable 'ptr' with const-qualified type 'int *const'*/ 
     
    /*int x = 10;
     const int * const ptr = &x;

     *ptr++; // Read-only variable is not assignable

     int y = 20;
     ptr = &y; // cannot assign to variable 'ptr' with const-qualified type 'const int *const'*/

//}


/*class Demo
{
public:
    int x=10;
    int y=20;
    
    // you cannot modify members of a class when a function is initialized
    // as const
    // the const members cannot modify data members of a class
    void Display() const
    {
        x++; //cannot assign to non-static data member within const member function 'Display'
        cout << x << " " << y << endl;
    }
};

int main()
{
    Demo d;
    d.Display();
}*/

void fun(const int &a, int &b)
{
    cout << a << " " << b << endl;
    //a++; // cannot assign to variable 'a' with const-qualified type 'const int &'
}
// it can only use values, but it cannot modify the values.


int main()
{
    int x = 10;
    int y = 20;

    fun(x,y);
    cout << "Main " << x << " " << y << endl;
}
