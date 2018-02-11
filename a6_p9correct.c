/* JTSK-320111
a6_p9.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name1[100], name2[100];
    double c1, c2;
    printf("Enter first file name\n");
    scanf("%s", name1);
    getchar();
    printf("Enter second file name\n");
    scanf("%s", name2);
    FILE *fptr1;
    fptr1= fopen(name1, "r");
    if(fptr1==NULL)
    {
            exit(1);
    }
    fscanf(fptr1, "%lf", &c1);
    fclose(fptr1);
    FILE *fptr2;
    fptr2= fopen(name2, "r");
    if(fptr2==NULL)
    {
            exit(1);
    }
    fscanf(fptr2, "%lf", &c2);
    fclose(fptr2);
    FILE *fptr0;
    fptr0 =fopen("results.txt", "w");
    //compute and save the results
    fprintf(fptr0,"%lf\n %lf\n %lf\n %lf\n",c1+c2, c1-c2, c1*c2, c1/c2);
    fclose(fptr0);
    return 0;
}
