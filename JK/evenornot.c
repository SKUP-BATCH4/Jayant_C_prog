#include<stdio.h>
int main()
{
    int a;
    printf("enter the values :");
    scanf("%d",&a);
    printf("the number is:%s",eve(a));
}
int eve(int a)
{


    if((a/2)*2==a)
    {
        return "even";
    }
    else{
        return "not even";
    }
}
