/* JTSK-320111
a2_p2_3.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("This program computes the total number of hours when you enter the weeks, days and hours you want to add: \n");
    printf("Also this program assumes you won't enter anything but positive integers only for correct sum \n");
    char time[100];
    int weeks_val;
    int days_val;
    int hours_val;
    printf("Enter the number of weeks:  \n");
    fgets (time, sizeof(time), stdin );
    sscanf(time, "%d", &weeks_val);

    printf("Enter the number of days:  \n");
    fgets ( time, sizeof(time), stdin );
    sscanf(time, "%d", &days_val);

    printf("Enter the number of hours:  \n");
    fgets ( time, sizeof(time), stdin );
    sscanf(time, "%d", &hours_val);
    int sum;
    sum = (168 * weeks_val) + (24 * days_val) + hours_val;
    printf("The total Hours: = %d \n", sum);


}
