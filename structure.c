#include "stdio.h"
struct books
{
char book_name[20];
float price;
char book_author[20];
};
void display(struct books b1[],int a)
{

    int i;
for(i=0;i<a;i++){
    printf("\nName of book is: %s",b1[i].book_name);
    printf("\nPrice of the book is: %f",b1[i].price);
    printf("\nAuthor of the book is: %s",b1[i].book_author);

}
}
void main()
{
int i,a;
printf("Enter number of books:");
scanf("%d",&a);
struct books b1[a];

for(i=0;i<a;i++){
    printf("Enter name of book:");
    scanf("%s",&b1[i].book_name);
    printf("Enter price of book:");
    scanf("%f",&b1[i].price);
    printf("Enter book author name:");
    scanf("%s",&b1[i].book_author);
}
display(b1,a);
}


