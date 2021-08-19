#include "stdio.h"
float SI();
void main()
{
    SI();
}
float SI()
{
int p,r,t,a;
printf("Enter principal balance,annual interest rate and time:");
scanf("%d%d%d",&p,&r,&t);
a=(p*r*t)/100;
printf("Simple interest=%d",a);
}
