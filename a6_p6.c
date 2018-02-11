/* JTSK-320111
a6_p6.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void countdown(int n)
{
  if (n>=1)
  {
      printf("%d    ",n);
      printf(",");
      countdown(--n);
  }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    countdown(n);
    return 0;

}
