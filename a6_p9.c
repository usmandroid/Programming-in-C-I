/* JTSK-320111
a6_p8.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ch[2][100];
double a,b;
int main()
{
    //opens the output file
    FILE *fptr;
    fptr= fopen("results.txt","w");
    //opens the corresponding files
    FILE *fp1;
    fp1=fopen(ch[1],"r");
    FILE *fp2;
    fp2=fopen(ch[2],"r");
    fscanf(fp1,"%lf",&a);//reads the integers
    fscanf(fp2,"%lf",&b);
    fclose(fp1);//closes the files
    fclose(fp2);
    fprintf(fptr,"%lf\n %lf\n %lf\n %lf\n",a+b, a-b, a*b, a/b);//saves the results
    int c;
    while(1)
    {
    c = fgetc(fptr);
    if( feof(fptr) )
    {
        break;
    }
      printf("%c", c);
   }
    fclose(fptr);
    return 0;
}
