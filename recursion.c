#include "stdio.h"
int main()
{   int n;
    printf("enter the number whose factorial is to be found");
    scanf("%d",&n);
    printf("factorial %d=%d",n,fact(n));
    return 1;
}
int fact(int n)
{   int result;
    if(n>=1)
    {
        return n*fact(n-1);
    }
    else
        {
    return 1;
}
}
