#include <stdio.h>

typedef int* i_pointer;

int main(){
    i_pointer p; // same as int* p;
    i_pointer a, *b; // same as int *a, **b;
    i_pointer myArray[10]; // same as int *myArray

    return 0; // 0 means everything is fine, other numbers means something is wrong.
}
