#include "stdio.h"
void add(); //
void add()
{
int a,b,c;
printf("Enter both numbers:\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("Sum=%d",c);
}
void main()
{
    add();
}
