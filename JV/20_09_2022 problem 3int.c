#include<stdio.h>

int main()
{

    int a,b,c,sum;

    printf("enter a,b,c\n");

    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(a==b | b==c | c==a)
    {
        printf("c is %d",c);

    }
    else if(b==c)
    {
        printf("a is %d",a);

    }
    else if(c==a)
    {
        printf("b is %d",b);

    }else if(a==b==c){
    printf("0");}
    else
    {

        printf("%d",sum);
    }

}
