/* JTSK-320111
a6_p7.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int x)
{
   int y;

   for ( y = 2 ; y <= x - 1 ; y++ )
   {
    if ( x%y == 0 )
    return 0;
   }
   if ( y == x )
      return 1;
}


int main()
{
   int x, result;

   printf("Enter a number:\n");
   scanf("%d",&x);
printf("%d", max(uint64_t));
   result = isPrime(x);
    if ( result == 1 )
        printf("It's prime.\n");
    else
        printf("It's not prime.\n");

   return 0;
}

