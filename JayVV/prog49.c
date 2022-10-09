//with argument with return
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    printf("%d",add(a,b));
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
