#include "stdio.h"
void main()
{
int i,a=0,b;
scanf("%d",&b);
printf("First %d natural numbers are: \n",b);
for(i=1;i<=b;i++)
    {
        a=a+i;
        printf(" %d",i);
    }
    printf("\nthe sum is: %d",a);
}
