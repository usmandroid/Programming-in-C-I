/* JTSK-320111
a5_p8.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int matrix[30][30];
    int ar1[30][30];
    int i, j, n;
    printf("\nHow many rows and columns?\n");
    scanf("%d", &n);

    printf("\nEnter %d X %d matrix elements \n",n,n);
    printf("\nEnter  elements\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0;j < n; j++)
        {
        scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe  Matrix is:\n");
    for (i = 0; i < n ; i++)
    {
    for (j = 0; j < n ; j++)
    printf ("%d ", matrix[i][j]);
    printf ("\n");
    }

    printf("\nThe Elements under the secondary diognal\n");

    for(i = 0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            ar1[i][j] = matrix[j][i];
        }
    }
	 for(i=0; i<n; i++)
    {
		printf(" ");
		for(j=0;j<n;j++)
		{
			if(i>j)
				printf("%d ",ar1[i][j]);
		}
	}
    return 0;
}

