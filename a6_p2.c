
/* JTSK-320111
a6_p2.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<stdio.h>
#include<strings.h>
# define SIZE 5000

void divby5 (float arr[], int size)
{
    int count;
   for (count = 0; arr[count] < size; count++)
   {
       arr [count] = arr[count] / 5;
   }
}
int main()
{
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int loop, size = 6;

    printf("original array:\n");
    for(loop = 0; loop < 6; loop++)
    {
        printf("%.3f \t", arr[loop]);
    }
    printf("\nmodified array divby5:\n");
    divby5(arr, size);

    for(loop = 0; loop < 6; loop++)
    {
        printf("%.3f \t",arr[loop]);
    }

    return 0;

}
