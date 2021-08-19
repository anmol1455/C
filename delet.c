#include "stdio.h"
void main()
{
int z,f=0,a,i,b,c[10]={10,20,30,40,50};


printf("\nEnter number to delete");
scanf("%d",&b);
for(i=0;i<5;i++)
{
   if(b==c[i])
   {
   z=i;
   f++;
   break;
   }
}
if(f==1)
{
    for(i=z;i<5;i++)
    {
    c[i]=c[i+1];
    }


printf("All numbers are\n");
for(i=0;i<4;i++)
{
    printf("%d\t",c[i]);
}
}
else
{
printf("\nEntered number does not exist ");

}
}


