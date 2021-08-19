#include "stdio.h"
int main()
{
int j,a,i,b,arr[10]={10,20,70,5,30,40,50,2,1,56};

for(i=0;i<10;i++)
{
    for(j=i+1;j<10;j++)
    {
    if(arr[j]<arr[i])
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
}
for(i=0;i<=10;i++)
{
printf("%d\t",arr[i]);
}
return 0;
}
