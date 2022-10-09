#include<stdio.h>
int num,pos;
int func(int,int);

int main()
{
    printf("enter the value of num:\n");
    scanf("\n%d",&num);

    printf("enter the value of pos:\n");
    scanf("\n%d",&pos);

    printf("after bit flip num is:\n%d",func(num,pos));
}
int func(int num,int pos)
{
    num=num^(1<<pos);
    return num;
}
