/*
Author: Murali Sriram
Purpose: Variable length array Exercise problem
*/
#include <stdio.h>

int main(int argc, char* argv[]){

    int N;
    printf("Enter the Size of array(N): ");
    scanf("%d", &N); // scanf function does not return :) so following is correct syntax.

    printf("N:%d \n", N);
    int arr[N];

    int i=0;

    while(i<N){
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
        //printf("\n");
        i++;
    }

    printf("\nprinting output\n");
    i=0;
    while(i<N){
        printf("arr[%d]: %d\n", i, arr[i]);
        i++;
    }


    return 0;
}
