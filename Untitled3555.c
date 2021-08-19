#include "stdio.h"
void main()
{
int a,b,i;
scanf("%d",&b);
printf("The first seven natural number is:%d");
for(i=0;i<=b;i++)
    a=i+a;
    printf("%d",i);
    printf("\nThe sum of the numbers is: %d",a);
}
