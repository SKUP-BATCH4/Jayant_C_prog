#include<stdio.h>
void main()
{
    int a,d;
    printf("enter your data");
    scanf("%d",&d);
    inner(d);
    printf("%d",inner(d));
}
int inner(int d){
    int a;
    a=d/10;
    return a;
    }
