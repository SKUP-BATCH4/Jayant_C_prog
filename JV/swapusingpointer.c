#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the values for a,b:\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d\n%d",a,b);
}

int swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
