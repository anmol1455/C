#include "stdio.h"
void main()
{
int sum=0,num;
Entry:
    printf("Entry number");
    scanf("%d",&num);

    sum=sum+num;
    if(sum<100)
    {
        goto Entry;
    }
    else
        goto Exit;
    Exit:
        printf("Sum=%d",sum);
}







