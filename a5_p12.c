/* JTSK-320111
a5_p12.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void replaceAll(char *str, char c, char e)
{
    printf("String before replacement: %s\n", str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==c)
        {
            str[i]=e;
        }
        i++;
    }
    printf("String after replacement: %s\n", str);
}

int main ()
{
    int num=1;
    char cin, ein;
    char s[80];
    while(num>0)
        {
       printf("Enter string:\n");
       fgets(s, sizeof(s), stdin);
       if (strcmp(s,"stop\n")==0)
       {
        break;
       }
       printf("Character to be replaced?\n");
       scanf("%c", &cin);
       getchar();
       printf("Character to be replaced with?\n");
       scanf("%c", &ein);
       getchar();
       replaceAll(s, cin, ein);
    }
    return 0;
}

