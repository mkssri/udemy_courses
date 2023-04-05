#include <stdio.h>


int addNums(int a, int b);

int main(){

    int (*func_ptr)(int, int);
    func_ptr = addNums;

    int result = func_ptr(2,3);
    printf("\n result: %d \n", result);

    return 0;
}
int addNums(int a, int b){
    return a+b;
}
