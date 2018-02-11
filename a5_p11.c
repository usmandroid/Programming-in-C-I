/* JTSK-320111
a5_p11.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int count_insensitive(char *str, char c)
{
    int total =  0, i = 1;
    while (str[i] != '\0') // guard empty string
    {
        if (str[i] == tolower(c) || str[i] == toupper(c))
        {
            total++;
        }
        i++;
    }
    return total;
}

int main()
{
    char *dyn_string,*dyn_string2 ;
    int i, len;
    int char_b = 0, char_H = 0, char_8 = 0, char_u = 0, char_dollarsign = 0;
    dyn_string = (char*) malloc(sizeof(char) *len);
    if (dyn_string == NULL)
         exit(1);

    printf("Enter the string:\n");
   //fgets(dyn_string, sizeof(char), stdin);
   gets (dyn_string);
    len =(size_t)strlen(dyn_string);
    dyn_string2 = (char*) malloc(sizeof(char) *len);
    (char*)strcpy(dyn_string2,dyn_string);
    if (dyn_string2 == NULL)
         exit(-1);


    for (i=1; i<=len; i++)
    {
        if (dyn_string2[i] == 'b')
            char_b++;
        else if(dyn_string2[i] == 'H')
            char_H++;
        else if (dyn_string2[i] == '8')
            char_8++;
        else if (dyn_string2[i] == 'u')
            char_u++;
        else if (dyn_string2[i] == '$')
            char_dollarsign++;
    }
    printf("\n The char \"b\" occurs %d times. ",count_insensitive(dyn_string2,'b'));
    printf("\n The char \"H\" occurs %d times. ",count_insensitive(dyn_string2,'H'));
    printf("\n The char \"8\" occurs %d times. ",count_insensitive(dyn_string2,'8'));
    printf("\n The char \"u\" occurs %d times. ",count_insensitive(dyn_string2,'u'));
    printf("\n The char \"$\" occurs %d times. ",count_insensitive(dyn_string2,'$'));
    free(dyn_string);
    free(dyn_string2);
    return 0;
}
