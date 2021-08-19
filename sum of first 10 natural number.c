#include "stdio.h"
void main()
{
int i,a=0;
printf("First 10 natural numbers: \n");
for(i=1;i<=10;i++)
    {
        a=a+i;
        printf(" %d",i);
    }
    printf("\nthe sum is: %d",a);
}
