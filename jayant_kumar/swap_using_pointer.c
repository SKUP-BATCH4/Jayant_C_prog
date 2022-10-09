#include<stdio.h>
int a,b,c;
int* ptr1;
int* ptr2;
int* ptr3;
int main(){

swap(a,b);
}

int swap(int a,int b){

printf("enter the values: of a and b:\n");
scanf("%d\n %d",&a,&b);

    ptr1=&a;
    ptr2=&b;
    ptr3=&c;

    ptr3=ptr1;
    ptr1=ptr2;
    ptr2=ptr3;

    printf("%d\n%d\n",*ptr1,*ptr2);
a=*ptr1;
b=*ptr2;

    printf("%d\n%d",a,b);
}
