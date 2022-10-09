#include<stdio.h>
int main()
{
    printf("%d",intrest());
}
int intrest()
{
    int si,p,t,r;
    printf("enter the amount,time,rate of interest:");
    scanf("%d%d%d",&p,&t,&r);
    si=(p*t*r)/100;
    return si;
}
