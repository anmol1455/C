#include "stdio.h"
void main()
{
int a;
float b,c=0;
printf("Enter number:");
scanf("%d",&a);
b=a/2;
while(b!=c)
{
    b=c;
    b=(a/c+c)/2;
}
printf("The square root of %d is %f:",a,b);
}
