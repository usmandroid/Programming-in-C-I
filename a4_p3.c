/* JTSK-320111
a4_p3.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>

float convert(float kg, float g) // function definition
{
    float pounds;
    pounds = ( kg + (g / 1000) ) * 2.2;
    return pounds;

}

int main(void)
{
    float kg, g;
    printf("Enter kg: \n");
    scanf("%f", &kg);
    printf("Enter g: \n");
    scanf("%f", &g);

    printf("The kgs and gs in punds is:%f /n", convert(kg, g)); // function call
}
