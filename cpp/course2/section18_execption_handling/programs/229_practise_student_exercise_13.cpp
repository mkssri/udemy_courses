 /**************************
  * author : murali sriram
  * date   : 04/28/2024
  * ***********************/

#include <iostream>
using namespace std;

class StackOverFlow:exception{};
class StackUnderFlow:exception{};

class Stack
{
private:
    int *stk;
    int top=-1;
    int size;
public:
    Stack(int sz)
    {
        size = sz;
        stk  = new int[size];
    }

    void push(int x)
    {
        if(top==size-1)
            throw StackOverFlow();
        top++;
        stk[top] = x;
    }

    int pop()
    {
        if(top==-1)
            throw StackUnderFlow();
        return stk[top--];
    }
};

int main()
{
    Stack s(5);

    s.push(1);
    s.push(3);
    s.push(4);
    s.push(6);
    s.push(7);

    return 0;
}
