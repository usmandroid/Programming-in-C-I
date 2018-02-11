#include<stdio.h>

int main(void);
{
   char c;
    while ((c = getchar ()) != '\n')
    {
        // ignore the letter b
        if (c == 'b')
        continue ;
        printf ("%c", c);
    }
}


