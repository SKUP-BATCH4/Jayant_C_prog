
#include<stdio.h>
int main()
{
    int x=20,y=40;
    int a =((x++) - (y--) + (--x) - (++y));
    printf("%d\n",x++);
    printf("%d\n",y--);
    printf("%d\n",--x);
    printf("%d\n",++y);
    printf("%d\n",a);
}
