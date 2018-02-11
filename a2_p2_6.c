/* JTSK-320111
a2_p2_6.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */


#include <stdio.h>

int main(void)
{
    char var_x[100];
    char var_y[100];
    double val_x;
    double val_y;

    printf("Enter value for x :\n");
    fgets(var_x, sizeof(var_x), stdin);
    sscanf (var_x , "%lf", &val_x );


    printf("Enter value for y :\n");
    fgets(var_y, sizeof(var_y), stdin);
    sscanf (var_y , "%lf", &val_y );

    double *ptr_one;
    double *ptr_two;
    double *ptr_three;

    ptr_one = &val_x;
    ptr_two = &val_x;
    ptr_three = &val_y;

    printf("Both ptr_one and ptr_two are initialised to same variable x, \n");
    printf("ptr_three is initialised to a different variable y. \n");

    printf("Memory Adress of ptr_one: %p, and ptr_two: %p, ", ptr_one , ptr_two);
    printf("Memory Adress of ptr_three: %p", ptr_three);



}
