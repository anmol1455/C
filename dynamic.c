#include "stdio.h"
#include "stdlib.h"
void main()
{
    int size,*ptr,i,sum=0;
    printf("Enter how many number do u want to add: ");
    scanf("%d",&size);
    ptr=(int*)malloc(size*sizeof(int));

    for(i=0;i<size;i++)
    {
        printf("\nEnter num: %d :",i+1);
        scanf("%d",ptr+i);
        sum=sum+*(ptr+i);
    }
    printf("\nall numbers are: \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\nsum=%d",sum);
}

