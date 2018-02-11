/*
JTSK-320111
a4_p9.c
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
    printf("The concatenate of %s, %s is: \n %s \n", one_string, two_string,strcat(one_string,two_string));

    //copy two into three

    char three_string[500];
    printf("\n Now enter string three:\n");
    fgets (line , sizeof ( line ), stdin );
    sscanf (line , "%s", three_string );

    printf("The copy of %s in %s is: \n %s \n", two_string, three_string,strcpy(two_string,three_string));

    //compare two and one

    printf("The copy of %s in %s is: \n %s \n", two_string, three_string,strcpy(two_string,three_string));

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
        //modified to detect all occurances of char c

   while (cfound != NULL)
  {
    printf ("found at %d \n",(int)(cfound - two_string + 1));
    cfound=strchr(cfound+1,c);
  }







}

