/*
 Author: Murali Sriram
Date: 03/26/2023
Purpose: Murali demonstrating string Function's.
*/

#include <stdio.h>
#include <string.h> 
#include <ctype.h> 


int main(int argc, char* argv[]){

    // strlen function
    char myString[] = "My Name is Jason";
    printf("myString: %s\n", myString); 
    printf("Length of myString: %lu\n", strlen(myString)); // denoted as %d but argument has %lu (unsigned long) 

    // strncpy function
    char temp1[50];
    strncpy(temp1, myString, strlen(myString));
    char temp2[50];
    strncpy(temp2, myString, strlen(myString)-1);
    char temp3[10];
    //strncpy(temp3, myString, strlen(myString)); // As expected it throwed an error lol, since we are trying put more in temp3 buffer compared to what it can take in
    char temp4[50];
    strncpy(temp4, myString, sizeof(temp4)-1);

    printf("temp1: %s\n", temp1); 
    printf("Length of temp1: %lu\n", strlen(temp1)); // warning: i got following, hence changed: denoted as %d but argument has %lu (unsigned long) 

    printf("temp2: %s\n", temp2); 
    printf("Length of temp2: %lu\n", strlen(temp2)); // warning: i got following, hence changed: denoted as %d but argument has %lu (unsigned long) 
    
    printf("temp4: %s\n", temp4); 
    printf("Length of temp4: %lu\n", strlen(temp4)); // warning: i got following, hence changed: denoted as %d but argument has %lu (unsigned long) 
    printf("Size of temp4: %lu\n", sizeof(temp4));  
    printf("temp4[15]: %c\n", temp4[15]);  
    printf("temp4[16]: %c\n", temp4[16]);  
    printf("temp4[49]: %c\n", temp4[49]);  
    //printf("temp4[50]: %c\n", temp4[50]); // lol i got warning as expected!!!  



    // strncat function
    char src[50], dest[50];
    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    strncat(dest, src, 15);
    printf("Final destination string : |%s|\n", dest);  


    // strcmp function basically it compares each character of both strings and if there is a difference at some place while traversal it accordingly stops and returns output.
    char s4[] = {"abc"};
    char s5[] = {"abf"};
    printf("strcmp(%s, %s)=  %d\n", s4, s5, strcmp(s4, s5));
    char s6[] = {"abcaf"};
    char s7[] = {"abcc"};
    printf("strcmp(%s, %s)=  %d\n", s6, s7, strcmp(s6, s7));


    // strtok function!! yay!!
    
    char str[] = "Hello How are you - my name is - jason";
    const char tk[] = "-";
    char *token;

    /*get the first token*/
    token = strtok(str, tk);

    /*walk through other tokens*/
    while(token!=NULL){
        printf(" %s\n", token);
        token = strtok(NULL, tk);//interesting!! LOL
    }

    char input_buff[100];
    printf("Enter a string whose size is <= %d:\n", 100);
    scanf("%s", input_buff);

    int i=0;
    int cntL=0;
    int cntD=0;
    int cntP=0;

    while(input_buff[i]!='\0')
    {
        if(isalpha(input_buff[i]))
        {
            ++cntL;
        }

        if(isdigit(input_buff[i]))
        {
            ++cntD;
        }
        
        if(ispunct(input_buff[i]))
        {
            ++cntP;
        }
        ++i;
    }

    printf("cntD: %d\ncntL: %d\ncntP: %d\n", cntD, cntL, cntP);

    return 0;
}
