#include<stdio.h>
void add( int a,int b)
{
    int sum;
     sum =a+b;
    printf("%d",sum);
}
int main()
{
    int a=10,b=20;
   // printf("enter the values:");
    scanf("%d%d",&a,&b);
    add(a,b);

}
