/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int grades[10];
    int res;
    for(int i=0; i<10; i++){
        printf("%2u >", i+1);
        scanf("%d", &grades[i]);
        res += grades[i];
    }

    printf("res: %d", res);
    return 0;
}