//without argument without return
#include<stdio.h>
void add()
{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d",sum);
}
void main()
{
   // printf("%d",add());
   add();
}
