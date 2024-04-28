 /**************************
  * author : murali sriram
  * date   : 04/26/2024
  * ***********************/

#include <iostream>
using namespace std;

/*
 * There can be multiple catch blocks
 * for a specific try block
 *
 * catch all -> catch(...)
 * catch all block should be the last block
 * general commonsense.
 * 
 * we can do nesting of try and catch blocks
 * also.
 *
 *
 * try (parent)
 * try (child)
 * catch (child)
 * catch (parent)
 */

class MyException1:exception
{

};

class MyException2:public MyException1
{

};

int main()
{
    try
    {
        throw MyException1();
    } 
    catch(MyException2 e)
    {
        cout << "Int catch" << endl;
    }
    catch(MyException1 e)
    {
        cout << "Double catch" << endl;
    }
    catch(...) //universal catch or all catch
    {
        cout << "All catch" << endl;
    }


    return 0;
}
