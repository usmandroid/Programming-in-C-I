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
    int n;
    int *ptr = &n;

    printf("Enter an float x: \n");
    fgets (line , sizeof(line), stdin );
    sscanf (line , "%f", & x );
    printf("Enter an Int n: \n");
    fgets (line , sizeof(line), stdin );
    sscanf (line , "%d", & n );
    int is_alpha(char *s)
    {
    while(*ptr)
     {
      if(isalpha(*ptr))
            printf("Product of float x and Int n: %f \n", *ptr * x);
            else
                printf("Enter again \n.");
            return 0;
    }

        return *ptr;
   }

    printf("Product of float x and Int n: %f \n", *ptr * x);

}

