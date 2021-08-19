#include "stdio.h"
#include "stdlib.h"
void main()
{
    int size,*ptr,i,sum=0,r;
    printf("Enter how many number do u want to add: ");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));

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
    printf("\nhow many number do you want more: ");
    scanf("%d",&r);
    ptr=(int*)realloc(ptr,r*sizeof(int));
    for(i=size;i<size+r;i++)
    {
        printf("\nEnter num: %d :",i+1);
        scanf("%d",ptr+i);
        sum=sum+*(ptr+i);
    }
    printf("\nall numbers are: \n");
    for(i=0;i<size+r;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\nsum=%d",sum);
    free(size);

}
