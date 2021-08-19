#include "stdio.h"
void multi(); //
void multi()
{
int a,b,c;
printf("Enter both Numbers:\n");
scanf("%d%d",&a,&b);
c=a*b;
printf("Result=%d",c);
}
void main()
{
    multi();
}
