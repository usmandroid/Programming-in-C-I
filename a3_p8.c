/*
JTSK-320111
a3_p8.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de*/


#include <stdio.h>


int main(void)
{
    char line [100];
    char ch;
    int n, num;
    printf (" Enter a value  for lowercase char ch: ");
    fgets (line , sizeof ( line ), stdin );
    sscanf (line , "%c",& ch );
    if (ch < 97 || ch > 122)
    {
        printf("Invalid input, enter lowercase char ch again :");
        return 1;
    }

    printf (" Enter a value  for int 7 < n > 32 : ");
    fgets (line , sizeof ( line ), stdin );
    sscanf (line , "%d", & n );
    if (n > 32 || n < 7)
    {
        printf("Invalid input, enter int  7 < n > 32 again :");
        return 1;
    }
    for (num = 1; num <= n; num++)
    {
     printf("%c, ",ch- num);

    }




}

