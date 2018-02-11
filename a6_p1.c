/* JTSK-320111
a6_p1.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<stdio.h>
#include<strings.h>

void print_triangle(int n, char ch)
{
    int count = 1, height;
    for (height =1; height <= n; height++)
    {
        for (count = 1; count <= n - height; count++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}
int main()
{
    char ch;
    int n;
    printf("Enter a character and then an integer.\n");
    scanf("%c", &ch);
    scanf("%d", &n+1);
    printf("\n");

    print_triangle(n, ch);
    return 0;
}
