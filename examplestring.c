# include <string.h>
 # include <stdio.h>
 int main () {
 char line [100];
 printf (" Enter a line : ");
 fgets (line , sizeof ( line ), stdin );
 printf ("You entered : %s\n", line );
 printf ("The length of the line is: %s\n",
 strlen ( line ));
 return 0;
 }
