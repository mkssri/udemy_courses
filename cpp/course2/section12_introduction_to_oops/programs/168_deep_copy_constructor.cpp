/***********************
author : murali sriram
date   : 03.01.2024
************************/

#include <iostream>

using namespace std;

class Test {

  private:
    int a;
    int *p;

  public:
    Test (int x) {
        a = x;
        p = new int[a];
    }

    Test (Test &t) {
        a = t.a;
        // p = t.p; /* CASE1 */
        p = new int[a]; /* CASE2 */
        // if there are values in the array,
        // write program to copy those values in the
        // new array for CASE2.
    }
};

int main() {

    Test t1(5);
    Test t2(t1);

    return 0;
}

/* LOGS
 *       
 *
 *        t1
 *
 *    |=============|
 *    |   a=5       |
 *    |=============|
 *    | p->x,x,x,x,x|
 *    |=============|
 *    address of p: 100 
 *    address of a: 10 
 *
 *
 *        t2 (CASE1)
 *
 *    |=============|
 *    |   a=5       |
 *    |=============|
 *    | p->x,x,x,x,x|
 *    |=============|
 *    address of p: 100 
 *    address of a: 11 
 *
 *    HERE BOTH OBJECTS t1 & t2 pointing to SAME "p" memory location which is a PROBLEM!!!
 *
 *
 *        t2 (CASE2)
 *
 *    |=============|
 *    |   a=5       |
 *    |=============|
 *    | p->x,x,x,x,x|
 *    |=============|
 *    address of p: 101 
 *    address of a: 11
 *
 *    HERE BOTH OBJECTS t1 & t2 does not point to SAME "p" memory location which is a GOOD!!! (it is called DEEP COPY CONSTRUCTOR!)
 *
 *    DECIDE to USE SHALLOW or DEEP COPY CONSTRUCTOR BASED ON YOUR APPLICATION!!!
 *
 * */
