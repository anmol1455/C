#include "stdio.h"
void main()
{
int i,great,small,num[10];
for(i=0;i<10;i++)
    {
    printf("\nEnter Number");
    scanf("%d",&num[i]);
    great=num[0];
    small=num[0];
    }
    for(i=0;i<10;i++){

     if(great<num[i])
        {
         great=num[i];
        }
   }
   for(i=0;i<10;i++)
   {
       if(small>num[i])
       {
           small=num[i];
       }
   }

printf("Greater Number is %d\n",great);
printf("Smaller Number is %d\n",small);
}
