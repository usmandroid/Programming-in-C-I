/* JTSK-320111
a6_p10.c
Sheikh Usman Ali
s.usmanali@jacobs-university.de */

#include <stdio.h>
#include <stdlib.h>

int main()
{

   FILE *fp1 = fopen("text1.txt", "r");
   FILE *fp2 = fopen("text2.txt", "r");
   FILE *fp3 = fopen("merge12.txt", "w");
   char c;

   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Error! opening file");
         exit(0);
   }

   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);

   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);

   printf("Merged text1.txt and text2.txt into merge12.txt");

   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}
