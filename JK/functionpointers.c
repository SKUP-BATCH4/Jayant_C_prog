#include<stdio.h>
int sum(int a,int b)
{
return a+b;
}
int main()
{
    int a,b,s;
int(*p)(int,int)=sum;
s=(*p)(5,8);
printf("%d",s);
}
