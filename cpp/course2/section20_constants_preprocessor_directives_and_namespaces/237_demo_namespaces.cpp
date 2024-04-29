 /**************************
  * author : murali sriram
  * date   : 04/29/2024
  * ***********************/

#include <iostream>
using namespace std;

/* namespaces are used inorder to remove name conflict b/w functions, variables, objects etc */

namespace First {
    void fun()
    {
        cout << "in first namespace" << endl;
    }
}

namespace Second {
    void fun()
    {
        cout << "in second namespace" << endl;
    }
}

int main()
{
    
    First::fun();

    using namespace Second;
    fun();

    return 0;
}
