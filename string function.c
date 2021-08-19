#include "stdio.h"
#include "string.h"

void main()
{
char a[25];
printf("Enter Password:");
scanf("%s",&a);
int b=strlen(a);
printf("Password Length: %d\n",b);
if(b<=8)
{
    printf("Poor password");
}
else if(b>=15){
    printf("Password is too long");
}
else{
    printf("Good Password");
}
}
