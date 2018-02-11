/*
JTSK-320111
a3_p6.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de*/

// Writing charactwers I

#include <stdio.h>
#include<ctype.h>
int main(void)
{
    char line [100];
    float x;
    int n, i;


    printf("Enter an float x: \n");
    fgets (line , sizeof(line), stdin );
    sscanf (line , "%f", &x );
    printf("Enter an Int n: \n");
    fgets (line , sizeof(line), stdin );
    sscanf (line , "%d", &n );

    while (n < 0)
    {
        printf("Enter again \n");
        scanf( "%d", &n);

    }
    while (n == 0)
    {
        printf("null \n");
        printf("Enter again \n");
        scanf( "%d", &n);

    }

    for( i=0; i<n; i++ )
        printf("%f \n",x);





}

