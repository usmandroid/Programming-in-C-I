/* JTSK-320111
a5_p4.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<strings.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int count_consonants(char str[])
{
    int i,a=0;
    size_t len = strlen(str);
    for(i=0; i<len; i++)
    {
        if (  str[i] == 'a'||str[i] =='e'
             ||str[i] =='i'||str[i] =='o'
             ||str[i] =='u'||str[i] =='A'
             ||str[i] =='E'||str[i] =='I'
             ||str[i] =='O'||str[i] =='U'
             ||str[i]==' '
            )
           a++;

    }

        return len -1 -a;
}

int main()
{
    char line[100];
    int x = 1;
    while(x !=0){
    printf("Enter the string:\n");
    gets(line); // I am forced to use
                        //gets as fgets is not working here
    if(line[0]=='\0')
    break;
    printf(" Number of consonants in string is: %i\n", count_consonants(line) + 1);
    }


    return 0;
}
