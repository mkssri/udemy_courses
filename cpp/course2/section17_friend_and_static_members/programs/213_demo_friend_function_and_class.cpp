 /**************************
  * author : murali sriram
  * date   : 04/25/2024
  * ***********************/

#include <iostream>
using namespace std;

class Test
{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend void fun();
};
void fun()
{

    Test t;
    t.a = 10;
    t.b = 20;
    t.c = 30;

    cout << "t.a = " << t.a << endl;
    cout << "t.b = " << t.b << endl;
    cout << "t.c = " << t.c << endl;

}

int main()
{
    fun();
    return 0;
}
