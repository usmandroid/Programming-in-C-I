
/* JTSK-320111
a5_p1.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

//A table for circles
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    int limit_up, limit_low, x, step_size;
    double perimeter, area;
    int count;
    printf("enter the following in order \n");
    printf(" upper limit, lower limit and step size. \n");

    scanf("%d,", &limit_up);
    scanf("%d,", &limit_low);
    scanf("%d,", &step_size);

    printf("x, perimeter, area \n");
    for (count = limit_low; count <= limit_up; count += step_size)
    {
        x = count;
        perimeter = 2 * M_PI * x;
        area = M_PI * count * count;


        printf(" %d  %lf  %lf \n", x , perimeter, area);
    }


    return 0;
}
