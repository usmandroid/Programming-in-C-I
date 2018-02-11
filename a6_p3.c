/* JTSK-320111
a6_p3.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<string.h>
#include<strings.h>
#include<stdio.h>
#include<stdlib.h>

int count_lower(char* str)
{
    int i=0 , countlower=0;
    for(i=0, i<strlen(str); i++)
    {
        if(islower(str[i]))
            {
                countlower++;
            }
    }
    return countlower;
}

int main()
{
    char *dyn_s;
    int how_many, i;
    dyn_s = (char*) malloc(sizeof(char) *how_many );
        i=0;
        while(dyn_s[i]!='\n')
        {
            printf("Enter string\n");
            scanf("%c", &dyn_s);
            i++;
        }
        if ( dyn_s == NULL )
        exit (1) ;

        printf("Number of lower case letters:");
        printf("%d\n",count_lower(dyn_s));
        free (dyn_s);
    return 0;
}
