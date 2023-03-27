/* Author: Murali Sriram
   Purpose: Compute average of 10 numbers.
   */

#include <stdio.h>

int main(int argc, char* argv[]){

    int arr[10];
    long sum_arr = 0;
    float avg = 0.0f;
    
    printf("Enter 10 numbers:\n");
    for(int i=0; i<10; i++){
        printf("%2u>", i+1);
        scanf("%d", &arr[i]);
        sum_arr += arr[i]; 
    }

    avg = (float)sum_arr/10;
    printf("avg: %.2f\n", avg);

    return 0;
}

