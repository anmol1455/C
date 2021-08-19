#include "stdio.h"
void swap(int *x,int *y)
{
int z;
z=*x;
*x=*y;
*y=z;
printf("\nvalue of x in swap fun :%d",*x);
printf("\nvalue of y in swap fun :%d",*y);
}
void main()
{ṇn
int a,b;
printf("Enter value of a and b:");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("\nvalue of a in %d",a);
printf("\nvalue of b in %d",b);

}
