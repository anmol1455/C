#include "stdio.h"
struct student
{
    int roll;
    char name[10];
    float fee;
};
void display(struct student s[])
{int i;
    for(i=0;i<3;i++){
 printf("\nYou name is: %s",s[i].name);
    printf("\nYou roll is: %d",s[i].roll);
    printf("\nYou fee is: %.1f",s[i].fee);
    }
}
void main()
{
    struct student s1[3],s2,*ptr;
    int i;
    ptr=s1;
    for(i=0;i<3;i++){
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

display(s1);
}
