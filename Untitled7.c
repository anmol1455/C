#include "stdio.h"
void main()
{
int a,i=1;
scanf("%d",&a);
do
    {
        printf("%d\n",a*i);
        i++;
    }
while(i<=10);
}
