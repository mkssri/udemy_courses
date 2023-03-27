/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;
    
    pnum = &num1;
    *pnum = 2L;
    ++num2;
    num2 += *pnum;
    
    pnum = &num2;
    ++*pnum;
    
    printf("num1: %ld num2: %ld *pnum: %ld *pnum+num2:%ld\n", num1, num2, *pnum, *pnum+num2);
    return 0;
}
