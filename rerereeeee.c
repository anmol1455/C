#include "stdio.h"
void main()
{
int flag=0,i,j,a,num[10]={1,2,3,4,5,6,7,8,9,10};
printf("Enter number");
scanf("%d",&j);
for(i=0;i<10;i++)
{
if(num[i]==j){
       flag=1;
       break;
}
    else{
        flag=0;
}
}
if(flag==1)
{
    printf("number is valid\n");
    {
        printf("Enter number to update");
        scanf("%d",&a);
        num[i]=a;
    }
}
else{
    printf("number  is invalid\n");
}

    printf("numbers are:\t");
    for(i=0;i<10;i++)
    {
    printf("%d\t",num[i]);
}
}
