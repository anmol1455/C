#include "stdio.h"
struct student
{
    int roll;
    char name[10];

};
void main()
{
    struct student s;
    FILE *ptr;
    ptr=fopen("binary.dat","rb");

    while(fread(&s,sizeof(s),1,ptr)!='\0')
    {
    printf("\nYour name: %s",s.name);
    printf("\nYour roll :%d",s.roll);
    }




    /*fread(&s,sizeof(s),100,ptr);
    printf("reading complete");
    fclose(ptr);*/
}

