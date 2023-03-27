/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int str_len( const char* string ) {
    
    const char* last = string;
    
    while(*last){
        ++last;
    }
    
    return last-string;
    
}

int main()
{
    char str[] = "HelloHello";
    printf("len: %d", str_len(str));

    return 0;
}