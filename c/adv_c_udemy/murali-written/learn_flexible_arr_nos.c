/*
Author: Murali Sriram
Purpose: Learning Flexible array numbers.
*/

#include<stdio.h>
#include <stdlib.h>

struct s{
    int arraySize;
    int array[];
};


int main(){

    int desiredSize = 5;
    struct s *ptr;
    ptr = malloc( sizeof(struct s) + desiredSize*sizeof(int) ); // sizeof operator ignore the size of flexible numbers, it takes the size of all array except the size of flexible array.
                                                               // desiredSize*sizeof(int) is for the size of the desired Flexible number.


    return 0;
}
