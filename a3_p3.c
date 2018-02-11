/*
JTSK-320111
a3_p3.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de*/

#include <stdio.h>

int main(void)
{
    printf("Enter any character: \n");

    char line [100];
    char val_char;
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c" , &val_char);

    printf("ASCII value of %c = %d.",val_char,val_char);

    if (val_char  >= 48 && val_char <= 57 )
    {
        printf(" It's a digit \n");
    }
    else if ((val_char   >= 65 && val_char  <= 90) || (val_char >= 97 && val_char <=122 ))
    {
        printf(" It's a letter \n");
    }
    else
    {
        printf(" It's neither digit nor letter \n");
    }





}

