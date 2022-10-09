#include<stdio.h>
int main()
{
int x=20;
int y=10;
fun(&x,&y);
printf("%d %d\n",x,y);
}
int fun(int *x, int *y)
{
*x=30;
*y=40;
printf("%d %d\n",*x,*y);
}
