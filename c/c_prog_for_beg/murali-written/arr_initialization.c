/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define MONTHS 12

int main()
{
    
    int months_arr[12] = {31,28,31,30,31,30,31,30,31,30,31,30};
    for(int i=0; i<MONTHS; i++){
        printf("Month: %d has days: %d\n",i+1,months_arr[i]);
    }
    
    return 0;
}


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define MONTHS 12

int main()
{
    
    int months_arr[12] = {31,28,[4]=31,30,31,[1]=29};
    for(int i=0; i<MONTHS; i++){
        printf("Month: %d has days: %d\n",i+1,months_arr[i]);
    }
    
    return 0;
}


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define MONTHS 12

int main()
{
    
    int tmp[12] = {0,2,3,4,1};
    for(int i=5; i<MONTHS; i++){
        tmp[i] = i*i;
    }
    
    for(int i=0;i<MONTHS;i++){
        printf("index: %d and tmp[%d]: %d\n", i, i, tmp[i]);
    }
    
    return 0;
}
