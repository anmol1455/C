#include "stdio.h"
void main()
{
    FILE *ptr;
    char data[100];
    char c;
    ptr=fopen("myfile.txt","r");
    if(ptr==NULL)
    {
        printf("unable to open file");
        return;
    }
c=fgetc(ptr);
printf("%c",c);
    /*while(fgets(data,100,ptr)!='\0')
    {
            printf("%s",data);
            printf("\n");
    }*/
}
