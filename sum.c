#include "stdio.h"
void main()
{
int a=1,b,i=0,esum=0,osum=0;
scanf("%d",&b);
while(i<=b)
{
    if(a%2!=0)
    {
        i++;
        printf("%d ",a);
    }
    a++;
}
}
