#include "stdio.h"
void main()
{
    FILE *ptr;
    char data[100];
    ptr=fopen("myfile.txt","a");
    if(ptr==NULL)
    {
        printf("unable to open file");
        return;
    }
    printf("\nEnter any data:\n");
    gets(data);
    fputs(data,ptr);
    fclose(ptr);
    printf("\nfile writing complete ");
}
