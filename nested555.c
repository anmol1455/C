#include "stdio.h"
void main()
{
int m,n,i,j,k,l;
for(i=5;i>=1;i--)
{
    for(j=1;j<i;j++)
{

        printf(" ");
    }
    for(k=5;k>=i;k--)
{
    printf("*");
}
for(l=5;l>i;l--)
{
    printf("*");
}
printf("\n");
}
for(m=1;m<=5;m++)
{
    for(n=1;n<=i;n++)
    {
        printf("*");
    }
}
}

