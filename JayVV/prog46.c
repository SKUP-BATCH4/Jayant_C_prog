//without argtuement and with return
#include<stdio.h>
void add()
{
    int a=10,b=5,c;
    c=a+b;
    //printf("%d",c);
    return c;
}
int main()
{
    int c;
    //int a,b,c;
    //printf("enter the value for a and b:\n");
    //scanf("%d%d",&a,&b);
    printf("%d", add());
}
