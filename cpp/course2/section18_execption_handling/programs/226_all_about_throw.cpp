 /**************************
  * author : murali sriram
  * date   : 04/26/2024
  * ***********************/

#include <iostream>
using namespace std;

class MyException : public exception {
public:

};
                           // throw() // this means function does not throw any exception
int division(int a, int b) throw(MyException) // if you are throwing int you can say
                                              // throw(int) here
{
    if(b==0)
        throw MyException();
    return a/b;
}

int main()
{
    int a=10, b=0, c;
    
    try
    {
        division(a,b);
            // throw 10, 1.5, 1.5f;
            // throw "Div by 0";
        cout << c << endl;
    }
    // catch(int e)
    catch(string e)
    {
       cout << "division by 0 " << e << endl;
    }
    cout << "bye!" << endl;
    return 0;
}
