#include <stdio.h>
#include <string.h>
#include<math.h>
int bintodec(int b[]) ;

int main()
{
     int binary [5] = {1, 0, 0, 1, 2};
    printf("%d", bintodec(binary));


    return 0;
}
int bintodec(int b[])
{
   int i=0,l=0;
   // n=strlen(b);
    while ( b[i] == 0 || b[i] == 1 )
    {
        l+=b[i] *pow(2,i);
        i++;
    }
    return l;
}
