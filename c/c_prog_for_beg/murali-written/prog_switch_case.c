/* Author: Murali Sriram
   Purpose: Switch & Case statement Demonstrations
   
   switch/case:
   important observations :)
   1/ switch statement should be written following {}.
   2/ case expression does not require {} haha where as switch requires it.
   3/ break statement is mostly must unless two case statements needs to do the same :)
      else it will follow through :) haha - Good learning :p
   */

#include <stdio.h>
#include <stdlib.h>

int main(){

    enum day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};
    enum day today=SUNDAY;

    /*switch(today){
        
        case MONDAY:
            printf("Today is Monday\n");
            break;
        case TUESDAY:
            printf("Today is Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Today is Wednesday\n");
            break;
        case THURSDAY:
            printf("Today is Thursday\n");
            break;
        case FRIDAY:
            printf("Today is Friyay\n");
            break;
        default:
            printf("Yay!! it's weekend\n");
            break;
    }*/
    switch(today){
        
        case MONDAY:
            printf("Today is Monday\n");
            break;
        case TUESDAY:
            printf("Today is Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Today is Wednesday\n");
            break;
        case THURSDAY:
            printf("Today is Thursday\n");
            break;
        case FRIDAY:
            printf("Today is Friyay\n");
            break;
        case SATURDAY:
        case SUNDAY:
        default:
            printf("Yay!! it's weekend\n");
            break;
    }

    return 0;
}
