/* Author: Murali Sriram
   Purpose: This Program is going to caluclate the area of reactange.
   */
#include <stdio.h>
#include <stdlib.h>

int main(){

    double width = 32.3;
    double height = 15.3;
    double perimeter = 0.0;
    double area = 0.0;

    perimeter = 2*(width+height);
    printf("perimeter: %.2lf\n", perimeter);
    
    area = width*height;
    printf("area: %.2lf\n", area);

    return 0;
}
