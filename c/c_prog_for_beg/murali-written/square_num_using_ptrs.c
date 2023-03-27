/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

void helper(int* ptr){
    *ptr = (*ptr)*(*ptr);
    return;
}

int main()
{
    int a = 10;
    printf("a=%i\n",a);
    helper(&a);
    printf("a=%i\n",a);
    
    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void helper(int* ptr){
    *ptr=(*ptr)*(*ptr);
    return;
}

int main()
{
   int *p_num = (int*)malloc(sizeof(int));
   *p_num = 10;
   
   printf("number:%d\n", *p_num);
   
   helper(p_num);
   
   printf("number:%d\n", *p_num);
   

    return 0;
}
