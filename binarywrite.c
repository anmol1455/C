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
    ptr=fopen("binary.dat","ab");
    printf("\nEnter roll name: ");
    scanf("%d%s",&s.roll,&s.name);
    fwrite(&s,sizeof(s),1,ptr);
    printf("writing complete");
    fclose(ptr);
}

