#include <stdio.h>
#include<string.h>
#define MAXSIZE 5000
#define TRUE 1
#define FALSE 0
int main()
{
    fprintf(stdout, "malloc failed\n");
    int i, l;
    char str[MAXSIZE];

    printf("Enter string\n");
    gets(str);
    l =strlen(str);
    l--;
    for(i=0;i<=l/2;l++)
    if (str[i] == str[l-i])
            return TRUE;
        else
            return FALSE ;
     return 0;
}
