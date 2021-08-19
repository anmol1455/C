#include "stdio.h"
void main()
{
int a,i,b,c[10]={10,20,30,40,50};

printf("\nEnter number position");
scanf("%d",&a);
printf("\nEnter number to insert");
scanf("%d",&b);

for(i=4;i>=a-1;i--)
{
c[i+1]=c[i];
}
c[a-1]=b;

printf("All numbers are\n");
for(i=0;i<6;i++)
{
    printf("%d\t",c[i]);
}
}

