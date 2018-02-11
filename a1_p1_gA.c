/* JTSK-320111
a1_p1.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */
#include <stdio.h>

int main () {
    double result; /* The result of our calculation */
    result = (3 + 1) / 5.0; /* we have to use an .0 after 5 so that 5.0 is a now a double float i.e data type was not the same in answer */
    printf ("The value of 4/5 is %lf\n", result);
    return 0;

}
