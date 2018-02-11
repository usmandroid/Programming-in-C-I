/* JTSK-320111
a4_p7.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>
float product(float a, float b)
    {
        float result = a * b;
        return result;
    }

void productbyref(float a, float b, float *p)
    {

        *p = a * b;
    }

void modifybyref(float *a, float *b)
    {

       *a = *a + 3;

       *b = *b + 11;
    }


int main(void)
{
    float a, b, p;
    printf("Enter value a : \n");
    scanf("%f", &a);

    printf("Enter value b : \n");
    scanf("%f", &b);
    // first func.
    printf("Product of a and b: %f \n", product(a, b));

    //second func.
    productbyref( a,  b, &p);

    printf("Product of a and b by reference:\n");
    printf( "%f \n",p);

    //third func.
    modifybyref( &a, &b);
    printf("The third function return the change by reference \n");
    printf("%f,%f\n",a,b);


}
