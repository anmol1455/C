#include "stdio.h"
void main()
{
int i,a,f=0;
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{


    if(a%i==0){
            printf("%d  is not a prime number.",a);
            f++;
            break;
            }
}
if(f==0)
printf("%d is a prime number.",a);
}
