/*
JTSK-320111
a3_p2.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de*/

// Divisible by 2 and 7 ?

#include <stdio.h>

int main(void)
{
    printf("Please enter any integer to check whether it is divisible by 2 and 7: \n");

    char input_int [100];
    char var_Int;
    fgets(input_int, sizeof(input_int), stdin);
    sscanf(input_int, "%c", &var_Int);

    int mod_14;
     mod_14 = var_Int % 14;

    if (mod_14 == 0)
    {
        printf (" The Int is divisible by 2 and 7. YAY!!! \n");

    }
    else
    {
      printf (" The Int is not divisible by 2 and 7. BOO!!! \n");

    }





}




