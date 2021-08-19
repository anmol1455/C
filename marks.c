#include "stdio.h"
int total(int,int,int);
float per(int);
void dev(flaot);

void main()
{
    int h,e,m,tt;
    float pp;
    printf("\nEnter marks of hindi, eng and math: ");
    scanf("%d%d%d",&h,&e,&m);
    tt=total(h,e,m);
    pp=per(tt);
    printf("\nTotal=%d",tt);
    printf("\nPercentage=%.2f",pp);
    div(pp);

}
int total(int x,int y,int z)
{
    int r;
    r=x+y+z;

    return r;
}
float per(int t)
{
    float p;
    p=(float)t*100/300;
    return p;
}
void div(float per)
{
    if(per>=60)
    {
        printf("\nFirst Division");
    }
    else if(per>=45)
            printf("\nSecond Division");
    else
        printf("\nThird Division");
}
