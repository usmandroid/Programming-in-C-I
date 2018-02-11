/* JTSK-320111
a5_p13.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void uppercase(char *str)
{
    int i=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(isupper(str[i]))
        str[i]=tolower(str[i]);
    }
    //printf("%s",str);
}

void lowercase(char *str)
{
    int i=0;
    for(i=0;str[i]!='\0';i++)
    {
        if (islower(str[i]))
        str[i] = toupper(str[i]);
    }
   // printf("%s",str);
}

int main ()
{
    char s[90];
    while(1)
    {
        printf("\nEnter string\n");
        //fgets(s, sizeof(s), stdin);
        gets(s);
        if(strcmp(s,"exit")==0)
        {
            break;
        }
        uppercase(s);
          printf("/n%s", s);
        lowercase(s);
       printf("\n \n %s", s);
    }
    return 0;
}
