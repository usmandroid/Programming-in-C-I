#include <stdio.h>

 /* // C program to return sum of elements in an array of size n

int sum_f(int temp_array[], int n)
            {
            int sum = 0; // initialize sum
            int i;


            // Iterate through all elements and add them to sum
            for (i = 0; i < n; i++)
            {
                sum += temp_array[i];
            }

            return sum;
            }

*/
int main(void)
{   char line [100];
    char c;
    int n;
    float sum, avg;
    //int n;
   printf("Enter character c: \n");
   fgets(line, sizeof(line), stdin);
   sscanf(line, "%c", &c );

    printf("enter n (total number of values): \n");
   fgets(line, sizeof(line), stdin);
   sscanf(line, "%d", &n );

    double temp_array [100];
    printf("enter values for n: \n");

    int i;
    for (i = 0; i < n; i++)
    {   printf("Enter the temp: \n");\

        scanf("%lf", &temp_array[i]);

       // fgets(temp_array, sizeof(temp_array), stdin);
        //sscanf(temp_array, "%lf", &temp_input );
    }

     switch (c)
        {
            case 's':
                sum = 0;
                for (i = 0; i < n; i++)
                {
                sum += temp_array[i];
                }
                printf("the sum: %lf \n", sum);

                break;

            case 'p':
                for(i=0; i<n; i++)
                {
                    printf("List of all temps.: %lf \n", temp_array[i]);
                }
                break;

            case 't':
                for(i=0; i<n; i++)
                {
                    printf("temp in F: %lf", ( (9 * (temp_array[i]) ) / 5) + 32);
                }
                break;
            default:
                for(i=0; i<n; i++)
                {
                    sum = 0;
                    sum += temp_array[i];
                    avg = sum / n;
                }
                printf("The average of temp.:%lf \n", avg);
            return 0;
        }
}
