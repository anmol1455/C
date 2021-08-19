#include "stdio.h"
void divide(); //
void divide()
{
int a,b,c;
printf("Enter both numbers:");
scanf("%d%d",&a,&b);
c=a%b;
printf("Result=%d",c);
}
void main()
{
    void divide();
}
