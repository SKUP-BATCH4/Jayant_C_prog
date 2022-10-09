#include<stdio.h>
void main()
{
    int si,p,t,r;
    printf("enter the amount,time,rate of intrest:");
    scanf("%d%d%d",&p,&t,&r);
    intrest(p,t,r);
}
void intrest(int p,int t,int r )
{
    int si;
    si=(p*t*r)/100;
    printf("%d",si);
}
