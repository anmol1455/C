#include "stdio.h"
#include "string.h"
void main()
{
int b,i;
char *a[30];
char ch=a[0];
printf("Enter Password:");
scanf("%s",&a);
b=strlen(a);
if(b>=8 && b<=15){
while(ch!='\0')
{
    ch=a[i];
    if(isalpha(a[i])==0)

}
else{printf("Length of password is incorect");}
}
}



