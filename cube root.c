#include "stdio.h"
void main()
{
int a,b,i;
printf("Input  numbers of term: %d",b);
scanf("%d",&b);
for(i=1;i<=b;i++)
    {
        a=i*i*i;
        printf("\nthe number is: %d and the cube of %d is: %d",i,i,a);
    }
}
