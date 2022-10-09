//with argument without return
#include<stdio.h>
void add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("%d",sum);
}
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
   // printf("%d",add());
   add(a,b);
}
