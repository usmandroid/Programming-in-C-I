/* JTSK-320111
a2_p2_5.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>

int main(void)
{

    char a [1000];
    int a_val;

    printf(" Enter any value of integer: \n");

    fgets(a, sizeof(a), stdin );
    sscanf(a, "%d", &a_val);

    printf(" The integer you entered is: %d \n", a_val);


    int *ptr_a ;
    ptr_a = &a_val;

    printf("The adress contained in the pointer variable:  %p \n", ptr_a);

    *ptr_a = *ptr_a + 5;

    printf("The modified value \" increased by 5 \" : %d , and the adress is : %p \n", *ptr_a, ptr_a );

}
