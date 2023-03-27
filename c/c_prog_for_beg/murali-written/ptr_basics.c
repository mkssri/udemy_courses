/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num = 150;
    int *pNum = NULL;
    
    pNum = &num;
    
    printf("num address is: %p\n", &num);
    printf("Address of pNum: %p\n", &pNum);
    printf("Value of the pNum: %p\n", pNum);
    printf("Value of what pNum is pointing to: %d\n", *pNum);

    return 0;
}
