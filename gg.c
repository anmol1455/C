#include "stdio.h"
int main()
{
char ch;
printf("Enter character:");
scanf("%c",&ch);
if(isalpha(ch))
    printf("\nEntered character is alphabet!!");
else
    printf("\nEntered character is not alphabet!!");
}



