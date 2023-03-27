/*
 Author: Murali Sriram.
 Purpose: Print Month and number of days in month.
 Date: 03/25/2023
*/

#include <stdio.h>
#define MONTH 12


int main(int argc, char* argv[]){

    int month_arr[MONTH] = {[0]=31, [1]=28, [2]=31, [3]=30, [4]=31, [5]=30, [6]=31, [7]=30, [8]=31, [9]=31, [10]=30, [11]=31};

    for(int i=0; i<MONTH; i++){
        printf("Month:%4d has days:%4d\n", i+1, month_arr[i]);
    }

    return 0;
}
