/*
 Author: Murali Sriram
 Date: 03/27/2023
Purpose: Understand gdb
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int arr[10] = {1};

    for(int i=0; i>=0; ++i)
    {
        printf("arr[%d]: %d", i, arr[i]);
    }

    return 0;
}
