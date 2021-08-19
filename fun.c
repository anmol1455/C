#include "stdio.h"
int total(int,int,int);
float per();
void dev();

void  main()
{
   div();
   add();
}

int total(int x,int y,int z)
{
    int r;
    r=x+y+z;
     printf("\nTotal=%d",r);

    return r;
}
float per()
{ int t;
 int h,e,m,tt;

    printf("\nEnter marks of hindi, eng and math: ");
    scanf("%d%d%d",&h,&e,&m);
t=total(h,e,m);
    float p;
    p=(float)t*100/300;
    printf("\nPercentage=%.2f",p);
    return p;
}
void div()
{
    float pe;
    pe=per();
    if(pe>=60)
    {
        printf("\nFirst Division");
    }
    else if(pe>=45)
            printf("\nSecond Division");

    else
        printf("\nThird Division");
}

