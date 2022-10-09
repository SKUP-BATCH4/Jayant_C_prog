#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    int **p=&ptr;
    int ***g=&p;
 printf("the value of adderes :%x\n%x\n%x\n%x\n",&a,&ptr,&p,&g);
 printf("the value of a :%d\n%d\n%d\n%d\n",a,*ptr,**p,***g);
}
