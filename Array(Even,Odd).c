#include "stdio.h"
void main()
{
int i,r,num[10];
int even[10],odd[10],e=0,o=0;
for(i=0;i<10;i++)
{
    printf("Enter Number:");
    scanf("%d",&num[i]);
    if(num[i]%2==0){
        even[e]=num[i];
        e++;
    }
    else{
        odd[o]=num[i];
        o++;
    }

}
  printf("\nAll numbers are:\n");
    for(i=0;i<=10;i++)
      {
          printf("%d\t",num[i]);
      }
      printf("\nAll even numbers are:\n");
    for(i=0;i<e;i++)
      {
          printf("%d\t",even[i]);
      }
      printf("\nAll Odd numbers are:\n");
      printf("\nodd num %d",o);
    for(i=0;i<o;i++)
      {
          printf("%d\t",odd[i]);
      }



}


