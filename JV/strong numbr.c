#include<stdio.h>
int fact(int);
int i;
void main()
{
    int x;
    printf("enter the value:\n");
    scanf("%d",&x);
    sum(x);

}


int sum(int x)
{
    int a,add=0,org=x;
    while(x!=0){
    a=x%10;
    x=x/10;
    add=add+fac(a);
    }
    if(org==add)
    {
        printf("it is Strong number\n");
    }else{
    printf("Its not Strong number");
    }
}



int fac(int a)
{
    int fact=1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    //printf("%d\n",fact);
    return fact;
}
