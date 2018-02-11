#include<stdio.h>
#include<conio.h>

int prime(int n)
{
    static int i=2;
    if(n%i==0&&n!=2)
    {
         return(1);
    }
    if(i<n)
    {
         i++;
         prime(n);                                    // recursion call
    }
}

int main()
{
    int p;
    printf("enter the number to check for prime number : ");
    scanf("%d",&p);
    int l=prime(p);                                      //function returns the value and puts in 'l' variable
    if(l==1)                                            //conditions
    printf("%d is not a prime number ", p);
    else
    printf("%d is a prime number ", p);
    getch();
}
