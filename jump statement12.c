#include "stdio.h"
void main()
{
int sum=0,num,i;
for(i=1;i<=10;i++){
    printf("Enter Number:");
    scanf("%d",&num);
    if(num<0)
    i--;
    else
    {
        sum=sum+num;
    }

}
    printf("Sum=%d",sum);
}
