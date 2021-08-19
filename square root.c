#include "stdio.h"
void main()
{
int i,num,b,sqrt;
printf("Enter num:");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
    b=i*i;
    if(b==num)
        {
        sqrt=i;
    break;
        }
}
printf("Square root is:%d",sqrt);
}
