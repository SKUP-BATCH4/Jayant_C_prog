#include<stdio.h>
struct abc
{
    int a,b,x;
}s1;
int main()
{
    struct abc s1;
    s1.a=10;
    s1.b=20;
    pass(s1.a,s1.b);
}
int pass(int a,int b)
{
    s1.x=a+s1.b;
    printf("%d",s1.x);
}
