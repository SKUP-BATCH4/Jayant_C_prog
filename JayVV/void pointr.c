#include<stdio.h>
void main()
{
    int a=10;
    char b='d';
    float c=4.56;
    void * ptr=&a;
     void * pt=&b;
     void * p=&c;
    printf("%d\n",*(int*)ptr);
    printf("%c\n",*(char*)pt);
    printf("%.2f",*(float*)p);
}
