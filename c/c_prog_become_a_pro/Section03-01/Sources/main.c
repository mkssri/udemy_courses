#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    struct Person {
        char name[10];
        double age;
    };

    struct Person p1; // type + var_name
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

    struct Person p2; // type + var_name
    p2.age = 20;

    printf("%lf\n", p2.age);

    strcpy(p2.name, "p2 name");

    printf("\n");
    puts(p2.name); // displays string in terminal like printf

    printf("\n");
    for(int i=0; i<7; i++){
        printf("%c", p2.name[i]);
    }
    printf("\n");
    return 0;
}
