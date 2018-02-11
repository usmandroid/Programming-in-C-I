/* JTSK-320111
a5_p10.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<stdio.h>
#include<math.h>
void proddivpowinv(float a, float b, float *prod, float *div,float *pwr, float *invb)
{
    *prod = a * b;
    *div = a / b;
    *invb = 1 / b;
    *pwr = pow(a, b);
    printf("The value of prod: %f\n", *prod);
    printf("The value of div: %f\n", *div);
    printf("The value of pow: %f\n", *pwr);
    printf("The value of inv: %f\n", *invb);

}

int main()
{
    float a , b, prod, div, pwr, invb;
    printf("Enter value of a :\n");
    scanf("%f", &a);
    printf("Enter value of b :\n");
    scanf("%f", &b);

    proddivpowinv(a, b, &prod, &div, &pwr, &invb);

    return 0;
}
