#include<stdio.h>
int main()
{
    int i;
    int*p[5];
    int a=10,b=20,c=30;
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    for(i=0;i<3;i++)
    printf("%d\n",p[i]);

}
