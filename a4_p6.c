/* JTSK-320111
a4_p6.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>

double sum25(double v[], int n)
{
    double sum = v[2] + v[5];
    return sum;
}

int main(void)
{
    int n, count;
    double v[20];
    printf("Enter number of values: \n");
    scanf("%d", &n);

    printf("Enter vals of v /n");

    getchar();

    for ( count = 0; count < n; count++)
    {
        printf("%d /n",count + 1);
        scanf("%lf", &v[count]);
    }

    if (n < 6)
    {
        printf("\n Array doesn't have any element in either p2 || p5 \n");
        return (-111);
    }
    else
    {
        printf("Sum of elements at p2 & p5: %lf \n", (double) sum25(v, n));
    }

}
