//create a structure and pass to a function

#include<stdio.h>
struct gnome{  //making structure here
int a;         //|
char b;        //|  here we are declaring the simple variables.
float c;       //|
}gn;            //declaring variable

//void check (gnome);   //declaring function

int main(){        //main function here
struct gnome gn={12,'j',2.3};     //initiallizing structure here
check(gn);         //calling fubnction here
}

void check(struct gnome gn){  //passing structure in the check function
printf("%d\n%c\n%.2f\n\n",gn.a,gn.b,gn.c);    //printing simple value

struct gnome *ptr=&gn;            //declaring and initiallizing pointer

printf("%d\n%c\n%.2f",(*ptr).a, (*ptr).b, (*ptr).c);  //printing the value using pointer

printf("%d\n%c\n%.2f",ptr->a,ptr->b,ptr->c);    //we can print the pointer structure also like this
}
