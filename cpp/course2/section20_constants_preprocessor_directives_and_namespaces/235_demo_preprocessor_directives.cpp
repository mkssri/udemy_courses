 /**************************
  * author : murali sriram
  * date   : 04/29/2024
  * ***********************/

#include <iostream>
using namespace std;

#define PI 3.1425

#ifndef PI
    #define PI 3
#endif

#define max(x,y) (x>y?x:y)
#define msg(x) #x  // returns string :)

/* these instructions are run before compiler compiles the program */
/* these are useful to replace the statements before the compilation
 * starts */

int main()
{
    cout << PI << endl; 
    cout << max(100,200) << endl;
    cout << msg(hello) << endl;
}
