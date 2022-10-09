#include<stdio.h>

struct abc
{
    int a;
    char b;
    float d;

};
int main()
{
    struct abc v1={10,'k',5.5};
    printf("%d\n %c\n %f\n",v1.a,v1.b,v1.d);
}
