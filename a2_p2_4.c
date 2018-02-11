/* JTSK-320111
a2_p2_4.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>
#include <string.h>


int main(void) {

    printf("Area Computations \n");

    printf("This program computes the Area of different Shapes. \nFollow the instructions carefully: \n");
    printf("Also this program assumes you won't enter anything but positive integers only,\n");
    printf(" for correct calculation of Area upto six decimal places \n");


    char a [1000];
    char b [1000];
    char h [1000];

    float a_val;
    float b_val;
    float h_val;
    float zero_point_5 = (0.5);


    printf("Now Enter the value of 'a' \n");

    fgets ( a, sizeof(a), stdin );
    sscanf(a, "%f", &a_val);


    printf("Now Enter the value of 'b' \n");
    fgets ( b, sizeof(b), stdin );
    sscanf(b, "%f", &b_val);

    printf("Now Enter the value of 'h' \n");
    fgets ( h, sizeof(h), stdin );
    sscanf(h, "%f", &h_val);


/* Now the math part*/


    float area_square;
    area_square = a_val * a_val ;
    printf("Area of square with side a:  %f \t \n", area_square);




    float area_rectangle;
    area_rectangle = a_val * b_val;
    printf("Area of rectangle with sides a and b:  %f \t \n", area_rectangle);



    float area_triangle;
    area_triangle = zero_point_5 * a_val * h_val;
    printf("Area of triangle with the base a and the height h : \t %f \n", area_triangle);


    float area_trapezoid;
    area_trapezoid = zero_point_5 * (a_val + b_val) * h_val;
    printf("Area of trapezoid with bases a, b, and height h: \t %f \n", area_trapezoid);









}
