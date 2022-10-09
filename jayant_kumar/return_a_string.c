//write a program to return a string

#include<stdio.h>

/*
char *display(char st);


char *display(char st){
return st;
}


int main(){
char *st[20];
printf("enter the string\n");
scanf("%s",&st);
printf("%s",display(st));
}
*/


char* display();
void main(){

char *str;
str=display();

printf("%s",display());
printf("%s",str);
}

char* display(){
static char a[]="hello";
char* str="glow";
return str;
}

