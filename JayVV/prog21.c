#include<stdio.h>
void main()
{
    int a,i=1,b=0;
    while(i<=10){
        printf("enter the value for a:\n");
        scanf("%d",&a);
        if(a<0){
            printf("enter the positive value");
            continue;
        }
        i++;
        b=a+b;
    }
    printf("%d\n",b);
}
