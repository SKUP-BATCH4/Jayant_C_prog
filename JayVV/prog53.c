#include<stdio.h>
int main()
{
    int si,p,t,r;
    printf("enter the amount,time,rate of intrest:");
    scanf("%d%d%d",&p,&t,&r);
    intrest(p,t,r);
}
int intrest(int p,int t,int r )
{
    int si;
    si=(p*t*r)/100;
    printf("%d",si);
    return si;
}
