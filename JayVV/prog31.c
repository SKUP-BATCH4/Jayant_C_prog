#include<stdio.h>
void main()
{
    for(int i=0;i<=5;i++){
    int p,t,r;
    printf("enter the p ,t and r");
    scanf("%d%d%d",&p,&t,&r);
    si( p,t,r);
}
}
int si(int p, int t,int r)
{
    int si;
    si=(p*t*r)/100;
    printf("simple interest %d\n",si);
    return si;
}
