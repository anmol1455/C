#include "stdio.h"
void sub(); //
void sub()
{
int a,b,c;
printf("Enter both numbers:\n");
scanf("%d%d",&a,&b);
c=a-b;
printf("Result=%d",c);
}
void main()
{
sub();
}
