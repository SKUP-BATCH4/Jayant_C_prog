#include<stdio.h>
int main()
{
    int p,t,r;
    printf("enter the amount :");
    scanf("%d%d%d",&p,&t,&r);
    interest(p,t,r);

}
void interest(int p,int t,int r)
{
    int x;
    x=p*t*r/100;
    printf("%d",x);

}
