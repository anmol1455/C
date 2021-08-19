
#include "stdio.h"
#include "ctype.h"
void  main()
{
char ch[30]="RIGht_re rigHT",a;
a=ch[0];
int i=0;
//if(isalnum(ch)==0){
//if(isalpha(ch)==0){
//if(isdigit(ch)==0){
//if(islower(ch)==0){
while(a!='\0'){
        a=ch[i];
//if(isupper(a)){
//if(isspace(a)){
//if(ispunct(a)){
if(islower(a)){

printf("%c",toupper(a));
i++;
}
else if(isupper(a)){printf("%c",tolower(a));i++;
}
else{printf("%c",a);i++;}
}
}






