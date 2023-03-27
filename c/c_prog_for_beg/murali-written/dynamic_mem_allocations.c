/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main( void )
{
    char* str;
    str = (char*)malloc(15*sizeof(char));
    
    if(str==NULL){
        return 0;
    }
    strcpy(str, "jason");
    printf("Address:%p, String:%s\n", str, str);
    
    str = (char*)realloc(str, 25*sizeof(char));
    strcat(str, ".com");
    printf("Address:%p, String:%s\n", str, str);
    
    free(str);
    
    return 0;
}
