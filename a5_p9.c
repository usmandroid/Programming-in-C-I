/* JTSK-320111
a5_p9.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<stdio.h>
#include<stdlib.h>

int prodminmax(int arr[], int n)
{
    int sml= arr[0] , lrg=arr[0], i;
    int product ;
    for(i=0; i < n; i++)
    {
        if (lrg < arr[i])
        {
            int temp= arr[i];
            lrg=temp;
        }
        if (sml > arr[i])
        {
             int temp = arr[i];
            sml=temp;
        }

    }
    product = sml * lrg;
    return product;
}

int main()
{
    int result, n, i, *dyn_arr;

    printf("\nNumber of elemnts?\n");
    scanf("%d", &n);

    dyn_arr = (int*) malloc(sizeof(int) * n);


    for (i = 0; i < n; i++)
    {
        printf("\nEnter Element %d:\n", i+1 );
        scanf("%d", &dyn_arr[i]);
    }

    result =  prodminmax( dyn_arr, n);

    printf("\nThe Product result: %d \n", result );

    free(dyn_arr);
    return 0;
}
