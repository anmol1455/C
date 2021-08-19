#include "stdio.h"
void main()
{
   FILE *ptr;
   char data[100];
    ptr=fopen("myfile.txt","a+");
    if(ptr==NULL)
    {
        printf("\nfile not found");
        return;
    }
   printf("Enter something to write: ");
   gets(data);

   fputs(data,ptr);
   printf("\nWriting complete");
fseek(ptr,0,SEEK_SET)   ;
   while(fgets(data,100,ptr)!='\0')
   {
       printf("%s",data);
   }
   printf("\nreading complete");
   fclose(ptr);

}
