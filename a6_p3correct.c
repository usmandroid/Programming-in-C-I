/* JTSK-320111
a6_p3.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_lower(char* str)
{
    char *p;
    int count =0;
    for(p=&str[0];*p!='\0';p++)
        {
        if(*p>='a' && *p<='z')
        {
            count++;
        }
    }
    return count;
}

int main ()
{
	int num =1;
	char s[50];
	while(num>0)
    {
		printf("Enter string\n");
		fgets(s, sizeof(s), stdin);
		if (s[0]=='\n')
        {
			break;
		}
		int low = count_lower(s);
		printf("\n The number of lowercase letters is: %d\n", low);
	}
	return 0;
}

