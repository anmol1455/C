#include "stdio.h"
struct student
{
    int roll;
    char name[10];
    float fee;
};
void display(struct student s[],int a)
{
    int i;
    for(i=0;i<a;i++){
 printf("\n enter your name: %s",s[i].name);
    printf("\nenter your roll no: %d",s[i].roll);
    printf("\nYour fee: %.1f",s[i].fee);
    }
}
void main()
{int a;
    printf("enter no of students");
scanf("%d",&a);
    struct student s1[a],s2,*ptr;
    int i;
    ptr=s1;
    for(i=0;i<a;i++){
  printf("\nEnter roll no:");
    scanf("%d",&s1[i].roll);
    printf("\nEnter name:");
    scanf("%s",&s1[i].name);
    printf("\nEnter fee:");
    scanf("%f",&s1[i].fee);
    }

    /* s1.roll=78;
    s1.fee=745;
    strcpy(s1.name,"nilesh");*/

   /* printf("\nsize of stuct is %d",sizeof(s1));
    printf("\nYou name is: %s",s2.name);
    printf("\nYou roll is: %d",s2.roll);
    printf("\nYou fee is: %.1f",s2.fee);*/

display(s1,a);
}
