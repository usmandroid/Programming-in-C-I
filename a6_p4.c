
/* JTSK-320111
a6_p4.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<stdio.h>
#include<strings.h>
#include<stdlib.h>

void divby5(float arr[], int size)
{
  int i;
	for(i=0; i<size; i++)
    {
        arr[i] = arr[i]/5;
	}
	int j;
	for(j=0;j<size;j++)
    {
        printf("%f ", arr[j]);
	}
}
int main()
{
    int n;
	printf("Enter value for n:\n");
	scanf("%d", &n);
	float*arr;
	arr = (float*) malloc(sizeof(arr)*n);

	int i,j;
	printf("Enter the values\n");
	for(i=0;i<n;i++)
    {
        scanf("%f", (arr+i));
	}
	printf("Orignal Array\n");
	for(j=0; j<n; j++)
	{
        printf("%f ", arr[j]);
	}
    printf("\nmodified array divby5:\n");

    divby5(arr, n);
    free (arr);
    return 0;

}

