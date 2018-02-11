/* JTSK-320111
a1_p3.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>

int main (void){
    int x = 17;
    int y = 4;
    float div;
    printf("the value of x is %d\n", x);
    printf("the value of y is %d\n", y);
    printf("the sum of x and y is %d\n", x + y);
    printf("the product of x and y is %d\n", x * y);
    printf("the difference of x and y is %d\n", x - y);
    div = (float) x / y;
    printf("the division of x and y is %f\n", div);
    printf("the remainder of x and y is %d\n",  x % y);

    return 0;}
