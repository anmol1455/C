#include "stdio.h"
char userid[]="iihtvns";
void prime(int n)
{
    int flag=0,i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("No is prime");
    }
    else
    {
        printf("\nNo is not prime");
    }

}
