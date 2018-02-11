/* JTSK-320111
a5_p6.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<stdio.h>
#include<stdlib.h>

void LargestInArray(int arr[], int n)
{
    int i = 0;
    int l1, l2, large = 0;
    l1 = l2 = large;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > l1)
        {
            l2 = l1;
            l1 = arr[i];
        }
        else if (arr[i] > l2 && arr[i] != l1)
        {
            l2 = arr[i];
        }
    }
    if(l2 == large)
        {
        printf("largest value: %d \n", l1 );
        }
    else
        {
        printf("Two Greatest values are: %d %d \n", l1, l2);
        }

}

int main()
{
    int *dyn_array, n, i;
    printf (" How many elements ? ");
    scanf ("%d", &n );
    dyn_array = (int*) malloc ( sizeof (int) *n );

    for (i = 0 ; i < n ; i++)
    {
    printf ("\nInput number %d :", i + 1);
    scanf ("%d", & dyn_array [i]);
    }

    LargestInArray(dyn_array,n);


    free (dyn_array);

    return 0;
}
