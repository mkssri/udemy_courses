 /**************************
  * author : murali sriram
  * date   : 04/26/2024
  * ***********************/

#include <iostream>
using namespace std;


int main()
{
    int a=10, b=0, c=20;
    
    try
    {
        if(b==0)
            throw 1;
        c = a/b;
        cout << c;
    }
    catch(int e)
    {
       cout << "division by 0 " << e << endl;
    }
    cout << "bye!" << endl;
    return 0;
}
