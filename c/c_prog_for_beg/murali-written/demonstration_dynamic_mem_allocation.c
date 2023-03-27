/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    char *text = NULL;
    
    printf("Enter limit of text: \n");
    scanf("%d", &size); // it takes in pointer..(scanf takes in pointer).
    
    text = (char*)malloc(size*sizeof(char));
    
    if(text!=NULL){
        printf("Enter some text: \n");
        scanf(" ");
        gets(text);
        printf("%s", text);
    }
    
    return 0;
}
