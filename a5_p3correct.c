/* JTSK-320111
a5_p3.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include<stdio.h>
#include<string.h>
#include<strings.h>
#include<math.h>
#include<stdlib.h>

//Smallest in array
float SmallestInArray(float arr[], int num) {
  int min, i = 1;

  min = arr[0];


  while (i<num)
    {
		if(arr[i]<min)
		{
			min = arr[i];
		}
		i++;
	}
	return min;
}

//Largest in array

float largestInArray(float arr[], int num)
{
    int i = 0;
    float highest = arr[0];
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

    int i=0, count = 0;
	char ch;
	printf("Enter 15 values\n");
	float arr[15];
	while(i<15) {
		scanf("%f", (arr+i));
		if(arr[i]<0){
            arr[i]=arr[i+1];
			break;
		}
		count++;
		i++;
	}
	getchar();
	printf("Enter a character:\n");
	scanf("%c", &ch);
    switch (ch)
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
    default:
        printf("Wrong input\n");
        break;
    }
    return 0;
}


