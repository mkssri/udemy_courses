/* Author: Murali Sriram
   Purpose: Convert minutes to Years and Days
   */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int minutesEntered = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0;

    printf("Please Enter the number of minutes: ");

    // get input from user
    scanf("%d", &minutesEntered);
    
    minutesInYear = 60.0*24.0*365.0;

    years = (minutesEntered)/(minutesInYear);
    days = minutesEntered/(60.0*24.0);

    printf("%d minutes is approximately %lf years and %lf days\n", minutesEntered, years, days);

    return 0;
}
