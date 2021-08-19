#include "stdio.h"
struct student
{
    int roll;
    char name[10];
};;
void main()
{
    struct student a;
    FILE *ptr,*rptr;
    ptr=fopen("delete.dat","rb");
    rptr=fopen("neww.dat","wb");
    int b;
    printf("enter roll number:");
    scanf("%d",&b);
    while(fread(&a,sizeof(a),1,ptr)!='\0')
    {
        if(a.roll!=b)
        {
            fwrite(&a,sizeof(a),1,rptr);
        }
    }
     fclose(ptr);
      fclose(rptr);
     //remove("union.cpp");
    rename("neww.dat","zzzzz.dat");

}
