#include<stdio.h>
int main()
{
    int a;
    printf("enter the number :");
    scanf("%d",&a);
    printf("%d",last(a));
}
int last(int a)
{
    int b;
    b=a/10;
    return b;
}


