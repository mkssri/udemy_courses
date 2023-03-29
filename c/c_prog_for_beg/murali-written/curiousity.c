/* Author: Murali Sriram
   Purpose: Testing various features of C Programming and Experimenting Thing's :)
   */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){


    // TRAIL 1
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("arr[0] = %d\n", arr[0]);
    printf("arr[1] = %d\n", arr[1]);
    printf("arr[2] = %d\n", arr[2]);
    printf("arr[3] = %d\n", arr[3]);
    printf("arr[4] = %d\n", arr[4]);

    /*
     * curiousity.c:15:30: warning: array index 10 is past the end of the array (which contains 10 elements) [-Warray-bounds]
       printf("arr[10] = %d\n", arr[10]);
                             ^   ~~
       curiousity.c:9:5: note: array 'arr' declared here
       int arr[10] = {0,1,2,3,4,5,6,7,8,9};
       ^
       1 warning generated.
    */

    printf("arr[10] = %d\n", arr[10]);
    
    int arr1[5] = {1};

    for(int i=0; i<5; i++){
        printf("arr1[%d]:%2d\n", i, arr1[i]);
    }

    int arr2[5] = {[3]=300};

    for(int i=0; i<5; i++){
        printf("arr2[%d]:%2d\n", i, arr2[i]);
    }

    // For " you write \".
    printf("For \" you write \\\".");

    
    int text1 = 'a';
    char* text2 = "a"; // text2 will have address of a :)

    printf("\ntext1: %c and text2: %c\n", text1, *text2);
    
    return 0;
}
