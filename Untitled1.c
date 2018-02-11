#include <string.h>
int main()
{
    int i=0, count=0;
    char s[25], ch;
    printf("\nEnter a string :  ");
    gets(s);
    printf("\nCharacter to check: ");
    scanf("%c", &ch);
    while (s[i] != '\0')
    if( ch == s[i++])
        count++;
    printf("\n%c occurs %d times", ch, count);

}
