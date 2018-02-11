/* JTSK-320111
a1_p3.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h> /* there was no # before include*/
int main() {
float result; /* The result of division*/
int a = 5;
float b = 13.5; /* 13.5 is not an integer so change it to an int to avoid logical error*/
result = a / b;
printf("The result is %f\n", result); /* the result is not an int therefore it is required to change it to an float  */
return 0;}
