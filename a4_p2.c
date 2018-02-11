/* JTSK-320111
a4_p2.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>


//Centimeters to kilometers

float convert(int cm) // function declaration
{
    float km;
    km = cm / 100000.0;
    return km;
}
int main(void)
{
    printf("Enter integer length in cm \n");
    int cm;
    scanf("%d", &cm);
    printf("the length im kms: %f \n",convert(cm)); // function call

}




