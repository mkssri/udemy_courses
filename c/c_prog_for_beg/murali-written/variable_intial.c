/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*******************************************************************************
(a) An integer

(b) A pointer to an integer

(c) A pointer to a pointer to an integer

(d) An array of ten integers

(e) An array of ten pointers to integers

(f) A pointer to an array of ten integers

(g) A pointer to a function that takes an integer as an argument and returns an integer

(h) An array of ten pointers to functions that take an integer argument and return an integer.
**********************************************************************************************/


#include <stdio.h>


int main()
{
    //a
    int a;
    
    //b
    int* a;
    
    //c
    int** a;
    
    //d
    int a[10];
    
    //e
    int* a[10];
    
    //f
    int* (a)[10];
    
    //g
    int (*a) (int);
    
    //h
    int (*a[10]) (int);
}
