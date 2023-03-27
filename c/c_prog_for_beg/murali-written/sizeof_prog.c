/*
 Author: Murali Sriram
 Purpose: Display sizes of data types 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("sizeof(char): %zd\n", sizeof(char));
    printf("sizeof(short): %zd\n", sizeof(short));
    printf("sizeof(int): %zd\n", sizeof(int));
    printf("sizeof(long): %zd\n", sizeof(long));
    printf("sizeof(long long): %zd\n", sizeof(long long));
    printf("sizeof(float): %zd\n", sizeof(float));
    printf("sizeof(double): %zd\n", sizeof(double));
    printf("sizeof(long double): %zd\n", sizeof(long double));

    return 0;
}
