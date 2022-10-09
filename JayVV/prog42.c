#include<stdio.h>
#define pi 3.14
int main()
{
    int r;
    printf("enter radius:");
    scanf("%d",&r);
    area(r);
    circum(r);

}
int area(int r)
{
    int area;
    area=pi*r*r;
    printf("area of circle:%d\n",area);
}
int circum(int r)
{
    int circum;
    circum=2*pi*r;
    printf("circumference of circle:%d",circum);
}
