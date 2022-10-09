#include<stdio.h>


int fact(int);
int a;
int fact(int a){
if(a<=1){
    return 1;
}
return a*fact(a-1);
}

int a;
int main(){
int *b;
b=&a;
int (*point)(int a)=fact;    //function pointer pointing function

printf("enter value:\n");
scanf("%d",&a);
printf("%d",point(a));
}


