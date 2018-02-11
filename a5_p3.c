/* JTSK-320111
a5_p3.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<stdio.h>
#include<strings.h>
#include<math.h>
#include<stdlib.h>

//Smallest in array
float SmallestInArray(float a[], int n) {
  int c, min, i = 0;

  min = a[0];


  for (c = 1; c < n; c++)
    {
    if (a[c] < min)
     {
       i = c;
       min = a[c];
    }
    }

  return min;
}

//Largest in array

float largestInArray(float arr[], int num)
{
    int i = 0;
    float highest = 0;
    for (i = 0; i < num; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }

    }
    return highest;



}
//sum of array
float ArraySum(float arr[], int num)
{
   float sum = 0.0;
   int i;
   for(i=0; i<num; i++)
   {
      sum += arr[i];
   }
   return sum;
}

//product of array
float ArrayProduct(float arr[], int num)
{
   float product = 1.0;
   int i;
   for(i=0; i<num; i++)
   {
      product*=arr[i];
   }
   return product;
}


//geometric mean of array
float geometric_mean(float arr[], int num)
{
   float gmean = pow(ArrayProduct(arr,num),(1.0/(float)(num)));
   return gmean;
}


int main()
{
    printf(" m -> Geometric mean, h -> Highest Number\n");
    printf(" l -> Smallest Number, s -> Sum of all Number\n");

    float arr[15];
    char c, line [100];
    int count = 0, i = 0;


    printf("Enter character c (m or h or l or s and enter): \n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c", &c );
    printf("Enter upto 15 floats. Enter -ve value to terminate\n");

    for (count = 0; count < 15; count++)
    {
        printf("Enter float(s) %d: \n", count );
        scanf("%f", &arr[count]);


        if (arr[count] < 0)
        {
            arr[count--]; // to remove the last negative int
           break;
        }
    }
    printf("\n You Entered: \n");
    for(count = count; count>=0; count--)
    {
        printf("%f, ", arr[count]);
    }



    switch (c)
    {
    case 'm':
        //Geometric Mean
        printf("\nGeometric Mean:%f", geometric_mean(arr, count));
        break;

    case 'h':
        //highest number in array
         printf("\n highest element in  the array is : %f",largestInArray( arr, count));
        break;

    case 'l':
        //Smallest number in array
        printf("\n Smallest in Array: %f",SmallestInArray(arr,count));
        break;

    case 's':
        //Sum of elements in array
        printf("\nthe Sum: %f",  ArraySum( arr, count));
        break;

    }
    return 0;
}

