/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i = 10;
    float f = 2.34;
    char ch = 'k';
    
    void *vptr;
    
    vptr = &i;
    printf("value of i= %d\n", *(int*)vptr);
    
    vptr = &f;
    printf("value of i= %.2f\n", *(float*)vptr);

    
    vptr = &ch;
    printf("value of ch= %c\n", *(char*)vptr);

    return 0;
}
