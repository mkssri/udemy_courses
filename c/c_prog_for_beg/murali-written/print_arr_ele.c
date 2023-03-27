/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int matrix[4][5] = {
        {10,20,30,40},
        {15,25,35,45},
        {47,48,49,50}
    };
    
    int m=sizeof(matrix)/(sizeof(matrix[0]));
    int n=sizeof(matrix[0])/sizeof(int);
    
    printf("m: %d and n: %d\n",m, n);
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("matrix[%d][%d]: %d\n", i, j, matrix[i][j]);
        }
    }
    
    return 0;
}
