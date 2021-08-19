#include "stdio.h"
void main()
{
    int a,*ptr,**xptr;
    a=90;
    ptr=&a;
    xptr=&ptr;
    printf("\nvalue of a: %d",a);
    printf("\nvalue of ptr: %d",ptr);
    printf("\nvalue of &a: %d",&a);
    printf("\nvalue of &ptr: %d",&ptr);
    printf("\nvalue of a through ptr: %d",*ptr);
    *ptr=*ptr*10;
    printf("\n value of a %d",a);
    printf("\n*xptr: %d",xptr);
    printf("\n*xptr: %d",*xptr);
    printf("\n*xptr: %d",**xptr);



}
