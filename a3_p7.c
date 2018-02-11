/*
JTSK-320111
a3_p7.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de*/

// Writing charactwers I

#include <stdio.h>

int main(void)
{
    char line [100];
    char ch;
    int n, num;
    printf (" Enter a value  for lowercase char ch: ");
    fgets (line , sizeof ( line ), stdin );
    sscanf (line , "%c", & ch );

    printf (" Enter a value  for int n: ");
    fgets (line , sizeof ( line ), stdin );
    sscanf (line , "%d", & n );
    printf("%c, ", ch);
    for (num = 1; num <= n; num++)
    {
     printf("%c ",ch - num);

    }
    //for(ch =ch - n ; ch <= ch; --ch)

      // printf("%c %c ", ch - n, ch);

}

