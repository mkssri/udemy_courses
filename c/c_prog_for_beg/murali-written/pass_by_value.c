/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void swap(int x, int y){
    
    int tmp = x;
    x = y;
    y = tmp;
    
    printf("In function\n");
    printf("x:%d\n", x);
    printf("y:%d\n", y);

    
    return;
}

int main()
{
    int x=10;
    int y=20;
    
    printf("Main\n");
    printf("x:%d\n", x);
    printf("y:%d\n", y);
    swap(x,y);
    printf("After function\n");
    printf("x:%d\n", x);
    printf("y:%d\n", y);
    
    return 0;
}