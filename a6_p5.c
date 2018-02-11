/* JTSK-320111
a6_p5.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double scalar_product(double a[], double b[], int n)
{
    double product = 0.00;
    int i;
  for ( i = 0; i < n ; ++ i ) {
product += a [i ]* b [i ];
}
    return product;
}

int main()
{
    int n, i;
    printf("Enter number of components:\n");
    scanf("%d",&n);
    double *v =malloc (n* sizeof(double));
    printf("Enter the values for vector v:\n");
    for(i=0;i<n;++i)
    {
        scanf("%lf",(v+i));
    }
    double *w =malloc (n* sizeof(double));
    printf("Enter the values for vector w:\n");
    for(i=0;i<n;++i)
    {
        scanf("%lf",(w+i));
    }
    int j=0, max_pos=0;
    double max = v[j];
    for(j=0 ;j<n ;j++)
    {
        if(v[j]>max)
        {
            max_pos = j;
            max = (double)v[j];
        }
    }
    int k=0, min_pos = 0;
    double min = v[k];
    for(k=0;k<n;k++)
    {
        if(v[k]<min)
        {
            min_pos = k;
            min = (double)v[k];
        }

    }
    printf("The scalar product is: %lf\n", scalar_product(v,w,n));
    printf("\nIn vector v The smallest num \"%lf\" occurs at position\"%d\" ", min, min_pos + 1);
    printf("\nIn vector v The largest num \"%lf\" occurs at position\"%d\" ", max, max_pos + 1);
    return 0;
        free(v);
        free(w);
}
