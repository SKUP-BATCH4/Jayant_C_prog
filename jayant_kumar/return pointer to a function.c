//returning a pointer

#include<stdio.h>

int *display(int[]);

int main(){
int *p;
int a[]={1,2,3,4,5};
p=display(a);

printf("%d\n",p);
printf("%d\n",*p);
}

int* display(int a[]){

a=a+2;
return a;
}


#include<stdio.h>
