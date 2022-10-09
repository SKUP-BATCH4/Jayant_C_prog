#include<stdio.h>
int main()
{
    int b,h;
    area(b,h);
    printf("enter the dimensions:");
    scanf("%d%d",&b,&h);
    printf("%d",area(b,h));
}
int area( b, h)
{
    int area;
    area=b*h*0.5;
    return area;
}
