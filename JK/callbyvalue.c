#include<stdio.h>
int main()
{
    int x=10,y=20;
    fun(x,y);
    printf("%d %d\n",x,y);

}
int fun(int x ,int y)
{x=30,y=40;
printf("%d %d\n",x,y);
}
