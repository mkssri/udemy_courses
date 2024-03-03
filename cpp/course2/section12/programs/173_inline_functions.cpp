/***********************
author : murali sriram
date   : 03.03.2024
************************/
#include <iostream>

using namespace std;

class Test
{
    public:
        
        void func1()
        {
            cout << "func1 is a inline function";
        }
        
        void func2();
        inline void func3();
};

void Test::func2()
{
    cout << "func2 is a non-inline function" << endl;
}

void Test::func3()
{
    cout << "func3 is a inline function" << endl;
}

int main()
{
    Test test;

    test.func1();
    test.func2();
    test.func3();

    return 1;
}

/*
 *
 *  IMPORTANT ( FOLLOWING IS HOW MACHINE CODE for above function's )
 *
 * 
 *  function2==================================
 *  ===========================================
 *  ===========================================
 *
 *
 *
 *  main=======================================
 *  ===========================================
 *  ===========================================
 *         func1===============================
 *         ====================================
 *         ====================================
 *  ===========================================
 *                     func3====================
 *                     =========================
 *                     =========================
 *  ===========================================
 *  ===========================================
 *  ===========================================
 *
 * since func1 & func3 are inline functions, they are part of main function in object code.
 * where as function2 is non-inline function, so it is not part of main function in object code.
 *
 */
