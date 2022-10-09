#include<stdio.h>
int main()
{
    int a=20,x;
    x=((a++) + (++a) - (--a) + (a--));
    printf("%d\n",a++);
    printf("%d\n",++a);
    printf("%d\n",--a);
    printf("%d\n",a--);
    printf("%d\n",x);
}
