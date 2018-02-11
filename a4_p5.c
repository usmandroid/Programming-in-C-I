/* JTSK-320111
a4_p5.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>

float sum =0.0;
int i;
float sum(i)
 {
    numfloat = numfloat+ i;
    return numfloat;
}

float average (float u1, float m) {
    float b = u1/m;
    return b;
}

int main(void)
{
    int n=10;
    float num_array[n];
    num_array;
    int i, sum, average;

    printf("Enter Integers to compute their sum and average \n");
    printf("Enter Integers less than 10  \n");
    printf("Enter -99 to print result  \n");



    for(i=1; count<=n && n!=-99 ;count++ )
    {
        fgets (num_array , sizeof ( num_array ), stdin );
        sscanf (num_array , "%d", &n );
    }

        if (num_array[count] == -99)
            sum += num_array[n];
            average = sum / n;
        {
         printf("The sum of all integers: %d \n", sum );
        }

}

