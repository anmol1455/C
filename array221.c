#include "stdio.h"
void main()
{
int flag=0,i,j,num[10]={1,2,3,4,5,6,7,8,9,10};
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
    printf("Roll no is valid");
}
else{
    printf("Roll no is invalid");
}
}
