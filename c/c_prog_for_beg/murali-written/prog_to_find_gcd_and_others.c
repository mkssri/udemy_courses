#include <stdio.h>
#include <stdlib.h>


// Function Definition.
int gcd( int u, int v );
float absoluteValue( float x );


int main( int argc, char* argv[] )
{
    int result = 0;    

    result = gcd( 150, 35 );
    printf("The gcd of 150 & 35 is %d\n", result);

    result = gcd( 1026, 405 );
    printf("The gcd of 1026 & 405 is %d\n", result);
    printf("The gcd of 83 & 240 is %d\n", gcd( 83, 240 ));
    
    float val1 = -5;
    printf("value:%4f and abosulte value:%4f\n", val1, absoluteValue(val1));
    float val2 = -100;
    printf("value:%4f and abosulte value:%4f\n", val2, absoluteValue(val2));
    return 0;
}


int gcd( int u, int v )
{
    int temp;

    while(v!=0){
        temp = u%v;
        u = v;
        v = temp;
    }

    return u;

}

float absoluteValue( float x )
{
    if(x<0)
    {
        x = -1*x;
    } 
    return x;
}
