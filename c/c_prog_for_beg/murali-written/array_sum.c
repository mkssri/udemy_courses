/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int arraySum(int array[], const int n){
    int sum=0, *ptr;
    int *const array_end = array+n;
    
    for(ptr=array; ptr<array_end; ptr++){
        sum += *ptr;
    }
    return sum;
}



int main()
{
    int arraySum(int array[], const int n);
    int values[10] = {3,7,-9,3,6,-1,7,9,1,-5};
    
    printf("The sum is %i\n", arraySum(values, 10));
    return 0;
}
