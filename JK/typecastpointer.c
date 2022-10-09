#include<stdio.h>
int main()
{

    int a=10;
    float b=5.5;
    char c='K';
    void * vp;
    vp=&a;
    printf("%d\n",*(int*)vp);
    vp=&b;
    printf("%0.2f\n",*(float*)vp);
    vp=&c;
    printf("%d\n",*(char*)vp);
}
