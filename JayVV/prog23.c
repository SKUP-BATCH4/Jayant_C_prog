#include<stdio.h>
void main()
{
    int b,a,d,c,i=0;
    printf("enter the numbers");
        scanf("%d",&a);
    while(i<=a){
        b=a%10;
        c=a/10;
        a=c;
        d=b;
        i++;
        printf("%d",d);
    }

}
