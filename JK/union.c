#include<stdio.h>
union abc
{
    int a;
    float b;
    char c;
};
void main()
{
    union abc u;
    u.a=10;
    u.b=30.25;
    u.c='A';
    printf("%d\n %f\n %c\n",u.a,u.b,u.c);
    printf("%d",sizeof(union abc));
}
