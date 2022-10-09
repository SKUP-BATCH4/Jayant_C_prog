#include<stdio.h>
int main()
{
    int a,i,fact=1;
    printf("enter the values");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is:%d",a,fact);
}
