#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    typedef struct Person person;
    struct Person {
        char name[10];
        double age;
    };
    person p1; // type + var_name
    p1.age = 20;

    printf("%lf\n", p1.age);

    strcpy(p1.name, "p1 name");

    printf("\n");
    puts(p1.name); // displays string in terminal like printf

    printf("\n");
    for(int i=0; i<7; i++){
        printf("%c", p1.name[i]);
    }

    printf("\n");
    printf("Address of main func: %p\n", main);
    return 0;
}
