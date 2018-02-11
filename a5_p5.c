/* JTSK-320111
a5_p5.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */
#include<strings.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int count_consonants(char str[])
{
    char *ptr;
    int a=0, b=0;
    ptr = str;

    while(*ptr!= 0)
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||
           *ptr=='O' ||*ptr=='U'||*ptr=='a' ||
           *ptr=='e'||*ptr=='i' ||*ptr=='o' ||
           *ptr=='u'||*ptr==' ')
            a++;
        else
            b++;

        ptr++;
    }
        return b ;
}

int main()
{
    char line[100];
    int x = 1;
    while(x !=0){
    printf("Enter the string:\n");
    gets(line);
    if(line[0]=='\0')
    break;
    printf(" Number of consonants in string is: %i\n", count_consonants(line));
    }


    return 0;
}
