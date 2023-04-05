#include <stdio.h>

void array(int size) {
    char alpha[size];
    int x=0;
    printf("\nStart\n");
    while(x<size){
        alpha[x] = 'A'+x;
        printf("alpha[%d]: %c\n",x, alpha[x] );
        x++;
    }
    printf("\nEnd\n");
}

int main(){

    array(5);
    array(20);
    array(9);

    return 0;
}

