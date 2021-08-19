#include "stdio.h"
void main()
{
    int i,sum=0,num[10];
    for(i=0;i<10;i++)
    {
        printf("\nEnter number:");
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("\nall Numbers are\n ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",num[i]);
    }
    printf("\nsum=%d",sum);
}
