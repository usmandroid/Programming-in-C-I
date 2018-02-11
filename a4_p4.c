/* JTSK-320111
a4_p4.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<stdio.h>
void print_form(int n, int m, char c)
{
    int i, height, a = 0;
    for (height = 1; height <= n; height++)
    {
        int result = m + a;
        for ( i = 1; i <= result; i++)
        {
            printf("%c", c);
        }
    a++;
    printf("\n");
    }
}
int main(void)
{
    printf("\nprint a Trapezoid\n");
    int n;
    int m;
    char c;
    printf("input val a (L2 bottom). \n ");
    scanf ("%d", &n);

    printf("input val m. (L1 above)\n");
    scanf ("%d", &m);

     printf("input val c (symbol). \n");
    getchar ();
    scanf ("%c", &c);
    print_form(n, m, c);
}

