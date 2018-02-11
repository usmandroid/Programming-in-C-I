/* JTSK-320111
a6_p8.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    FILE *fptr1;
    char ch, ch2;

    if ((fptr1 = fopen("C:\\chars.txt","r")) == NULL)
    {
       printf("Error! opening file");
       exit(1);
    }
    ch = getc (fptr1);
    ch2 = getc (fptr1);
    fclose(fptr1);
    FILE *fptr2;
    fptr2 = fopen("codesum.txt", "w");
    fprintf(fptr2, "%d", (int)ch + (int)ch2);

    printf("Value of c1=%d\n", ch);
    printf("Value of c2=%d\n", ch2);
    fclose(fptr2);

    return 0;
}
