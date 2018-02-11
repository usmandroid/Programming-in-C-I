/*
JTSK-320111
a4_p8.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de*/

#include<stdio.h>
#include<string.h>
#include<strings.h>

int main(void)
{
    char line[100];
    char one_string[500];
    char two_string[500];


    printf("Enter string one:\n");
    fgets (line , sizeof ( line ), stdin );
    sscanf (line , "%s", one_string );

    printf("Enter string two:\n");
    fgets (line , sizeof ( line ), stdin );
    sscanf (line , "%s", two_string );

    printf("The length of strings \n");

    //string length
    printf("Length of %s is %d \n", one_string, (int)strlen(one_string));
    printf("Length of %s is %d \n", two_string, (int)strlen(two_string));

    //string concatenation
    char p_string[1000];
    strcat(p_string, one_string);// p_string = one_string;
    strcat(p_string,two_string);
    printf("The concatenate of %s and %s is: \n", one_string, two_string );
    printf("%s \n",p_string);

    //copy two into three

    char three_string[500];
   /* printf("\n Now enter string three:\n");
    fgets (line , sizeof ( line ), stdin );
    sscanf (line , "%s",  three_string ); */

    printf("The copy of %s in three: \n ", two_string);
    printf("%s \n",strcpy(three_string, two_string));
    //compare two and one

        if (strcmp(two_string,one_string) == 0)
        printf(" %s and %s strings are same.\n", two_string, one_string);
        else
        printf("%s and %s strings are NOT same.\n", two_string, one_string);

    //find char c in string two
    char c;
    printf("Find character in string two.\n");
    scanf ("%c", & c );
    char  *cfound;
    cfound = strchr(two_string,c);
    printf("\n%c in %s found? \n %s\n", c, two_string, cfound );
     while (cfound == NULL)
  {
    printf("character %c is absent.", c);
        break;
  }








}
