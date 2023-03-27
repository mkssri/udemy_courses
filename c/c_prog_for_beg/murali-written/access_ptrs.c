/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int number=0;
    int *pnumber=NULL;
    
    number=10;
    printf("number's address: %p\n", &number);
    printf("number's value: %d\n\n", number);
    
    pnumber = &number;
    
    printf("pnumber's address: %p\n", (void*)&pnumber);
    printf("pnumber's size: %zd bytes\n", sizeof(pnumber));
    printf("pnumber's value: %p\n", pnumber);
    printf("value pointed to: %d\n", *pnumber);

    return 0;
}
