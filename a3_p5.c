/*
JTSK-320111
a3_p5.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de*/

// Days and hours II


#include<stdio.h>

int main(void)
{   int n;
    int i;
    printf("Enter any Integer number of days: \n");
    scanf( "%d", &n);

    while( n <= 0) //validate input
    {
        printf("Enter again \n.");
        scanf( "%d", &n);
    }


    for (i = 1; i <= n ;i++)

        printf(" days %d = %d hours \n",i, i * 24);

}
