/*
 *Author: Murali Sriram
 *Purpose: Murali learning variable length arrays.
*/
#include<stdio.h>

int main(){

    size_t size=0;
    printf("Enter the number of elements you want to store:");
    scanf("%zd", &size);

    float values[size];

    
    size_t rows=0;
    size_t cols=0;
    printf("Enter the number of rows you want to store: ");
    scanf("%zd", &rows);
    printf("Enter the number of cols you want to store: ");
    scanf("%zd", &cols);

    float beans[rows][cols];
    return 0;
}

