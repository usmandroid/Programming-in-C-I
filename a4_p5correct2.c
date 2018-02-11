/* JTSK-320111
a4_p5.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>
//sum function
float sum(float x_array[], int input_sum)
{
    float sum = 0.0;
    int count;

    for (count = 0; count < input_sum; count++)
    {
        sum += x_array[count];
    }
    return sum;
}

// average function
float average(float x_array[], int input_avg )
{
    float sum0 = sum(x_array, input_avg);
    float avg = sum0 / input_avg;
    return avg;
}

int main()
{
    float n[10];
    int count;
    for (count = 0; count < 10; count++)
    {
        printf("Enter floats %d: \n", count + 1);
        scanf("%f", &n[count]);

        if (n[count] == -99.0)

            break;

    }
    printf("the Sum of floats : %f \n", sum(n, count) );
    printf("the Average of floats : %f \n", average(n, count) );
    return 0;
}
