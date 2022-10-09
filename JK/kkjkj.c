#include<stdio.h>
int main()
{
    *int p,t,r;
    printf("enter the amount :");
    scanf("%d%d%d",&p,&t,&r);

printf("%d",interest( ));
}
int interest( )
{

    int c,p,t,r;
     printf("enter the amount :");
    scanf("%d%d%d",&p,&t,&r);

    c=p*t*r/100;
    return c;
}
