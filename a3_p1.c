/*
JTSK-320111
a3_p1.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de*/


//infinite loop by bad coding
#include <stdio.h>
int main(void)
{
    int i = 8;

    while (i >= 4) // Brackets were missing after while loop
        {
           printf("i is: %d \n", i);
           i--;
        }



        printf("That's it. \n");
}
