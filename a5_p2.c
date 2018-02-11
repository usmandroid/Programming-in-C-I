/* JTSK-320111
a5_p2.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
    char line[50];
    int count;
    printf("Enter a string \n");
    gets(line);
    //fgets(line, sizeof(line), stdin );
    int k;
    k = k - strlen(line);
    for(count = 0; count <= k; count ++)
    {
        if ( count % 2 != 1)

            printf("%c\n", line[count]);
        else
            printf(" %c\n", line[count]);
    }
    return 0;
}
