#include<stdio.h>
int main()
{
    int a;
    int b;
    int c,d,h;
    printf("enter the first value");
    scanf("%d",&a);
    printf("enter the first value");
    scanf("%d",&b);
    printf("enter the first value");
    scanf("%d",&c);

    if(a==b==c)
    {
        d=(a*0||b*0||c*0);
        printf("%d",d);
    }

    else if  (a==c)

    {
        h=a+c;
        printf("%d",h);
    }
    else
    {
        printf("%d",(a+b+c));
    }

}



