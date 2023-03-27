/* Author: Murali
   Purpose: for loops demonstartion yay!! :)
   */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    for(int cnt=1; cnt<=10; cnt+=1){
        printf("cnt: %d\n", cnt);
    }

    for(int cnt=1; cnt<=10; cnt++){
        printf("cnt: %d\n", cnt);
    }

    for(int cnt=1; cnt<=10; ++cnt){
        printf("cnt: %d\n", cnt);
    }
    
    for(int i=1,j=2; i<=5; ++i,j=j+2){
        printf("out: %d\n", i*j);
    }


    printf("\nTesting\n");
    int tmp;
    printf("tmp= %d\n", tmp);
    tmp = 22;
    printf("tmp= %2d\n", tmp);
    printf("tmp= %.4d\n", tmp);
    float tmp1;
    printf("tmp1= %f\n", tmp1);

    tmp1 = 10.14;
    printf("tmp1= %.6f\n", tmp1);


    return 0;
}
