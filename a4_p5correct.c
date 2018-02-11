/* JTSK-320111
a4_p5.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<stdio.h>
#include<math.h>
int i;
float sum_array_f(float data[i],int n ); // n is number of elements
//float average_array_f(float data[],int n );


int main(void)
{
    int i, n;
    float sum, average;
    float data[i];
    n=10;

    for (i = 0; i < n; i++)
    {   printf("Enter the temp: \n");\

        scanf("%f", &data[i]);
    }
    printf("\n The sum is: %f\n", sum);
  //  printf("\n the average is: %f\n", average);




}

        float sum_array_f(float data[i],int n )
        {
           int i;
           n = 10;
           float sum=0;
           for (i=0; i<n; i++)
           {
             sum = sum + data[i];
           }
           return(sum);
        }
    /*

        float average_function(float data[], int n)
        {
            int i;
            float average=0;

             for (i=0; i<n; i++)
           {
             average = tmp / n;
           }

            return (average);
        }
    */
