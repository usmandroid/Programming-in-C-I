
/* JTSK-320111
a4_p1.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>
#include <string.h> // header fiole for string functions
int position(char str[], char c)
{


    int idx;
    //loop until end of string



    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){} // semicolon was missing
    // for loop is always executing the next statement
    // loop was not termination
    // the next statement is return idx was
    // going in the loop without implementing

        //do nothing
        return idx;
}


int main(void)// return void was missing
{
    char line[80];
    while (1)
    {
        printf("Enter String \n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurence of 'g' is : %d\n", position(line, 'g'));

    }
}
