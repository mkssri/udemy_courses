 /**************************
  * author : murali sriram
  * date   : 04/26/2024
  * ***********************/

#include <iostream>
using namespace std;

int division(int a, int b)
{
    if(b==0)
        throw 1;
    return a/b;
}


int main()
{
    int a=10, b=2, c=20;
    
    try
    {
        c = division(a,b);
        cout << c << endl;
    }
    catch(int e)
    {
       cout << "division by 0 " << e << endl;
    }
    cout << "bye!" << endl;
    return 0;
}
