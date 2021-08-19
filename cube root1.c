#include "stdio.h"
void main()
{
int a,b,i;
scanf(" %d",&b);
for(i=1;i<=b;i++)
{
    a=i*i*i;
    printf("\nNumber is: %d and the cube root of the %d is: %d",i,i,a);
}
}
