
/*
JTSK-320111
a3_p4.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de*/

// Days and hours I

#include <stdio.h>

int main(void)
{
    int n, i;
    // Prompt User to input again
    printf("Enter any number of days: \n");
    scanf( "%d", &n);



    while( n <= 0) //validate input
    {
    printf("Enter again \n");
    scanf( "%d", &n);
    }



    for (i = 1; i <= n; i++)
    {
        printf(" days %d = %d hours \n",i, i * 24);

    }



   /* if (n <= 0)
    {
        printf("Enter again\n");
        scanf( "%d", &n);
    }
    else
    {
        while (n > 0 && n <= n)
        {
            printf(" days %d = %d hours \n",n, n * 24);
            n--;
        }
    }

    */
}

