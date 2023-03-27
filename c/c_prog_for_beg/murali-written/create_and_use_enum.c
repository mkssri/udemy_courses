/* Author: Murali Sriram
   Purpose: Enum
   */

#include <stdio.h>
#include <stdlib.h>

int main(){
    enum Company1 {GOOGLE, FACEBOOK, MICROSOFT, XEROX, YAHOO, TI};
    enum Company2 {GOOGLE2, FACEBOOK2, MICROSOFT2=10, XEROX2, YAHOO2, TI2};

    enum Company1 microsoft = MICROSOFT;
    enum Company1 xerox = XEROX;
    enum Company1 google = GOOGLE;

    printf("microsoft: %d \n xerox: %d \n google: %d \n", microsoft, xerox, google);

    enum Company2 microsoft2 = MICROSOFT2;
    enum Company2 xerox2 = XEROX2;
    enum Company2 google2 = GOOGLE2;

    printf("microsoft2: %d \n xerox2: %d \n google2: %d \n", microsoft2, xerox2, google2);
  return 0;
}

