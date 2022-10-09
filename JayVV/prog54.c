#include<stdio.h>
void main()
{
    intrest();
}
void intrest()
{
    int si,p,t,r;
    printf("enter the amount,time,rate of intrest:");
    scanf("%d%d%d",&p,&t,&r);
    si=(p*t*r)/100;
    printf("%d",si);
}
