#include<stdio.h>
int main()
{

    int a=10;
    /*int *p=&a;
    int *q=&b;
    int *r=*p+*q*(sizeof(int));
    printf("%d",r);*/
    int *p=&a;
    printf("%d\n",p);
    p=p+2;
    printf("%d",p);
}

