/* JTSK-320111
a2_p2_1.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>

int main (void){

double a;
double b;
printf("enter the first double: \n");
scanf("%lf",&a);
printf("enter the second double: \n");
scanf("%lf",&b);
double sum_ab = a + b ;
printf("the sum of a and b is : %lf \n", sum_ab);
double diff_ab = a - b ;
printf("the difference of a and b is : %lf \n", diff_ab);
double square_a = a * a ;
printf("the square of a and is : %lf \n", square_a);

int c;
int d;
printf("enter the first integer \n");
scanf("%d",&c);
printf("enter the second integer \n");
scanf("%d",&d);

int sum_cd = c+d;
int product_cd = c*d;
printf("the sum of c and d is : %d \n", sum_cd);
printf("the product of c and d is : %d \n", product_cd);

char e ;
char f ;

printf("enter the first character: \n");
getchar();
scanf("%c",&e);

printf("enter the second character: \n");
getchar();
scanf("%c",&f);


char sum_ef = e + f;
char product_ef = e * f;
printf("the sum of e and f is as chars , and as decimal : %c %d \n", sum_ef, sum_ef);

printf("the product of e and f is as chars , and as decimal  : %c %d \n", product_ef, product_ef );








}
