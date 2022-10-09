#include<stdio.h>
void main()
{
    int b,h;
    printf("enter the value for breadth:");
    scanf("%d",&b);
    printf("enter the value for length:");
    scanf("%d",&h);
    tri(b,h);
}
    int tri(int b,int h)
    {
        int area;
        area=((b*h)/2);
        printf("area of triangle : %d",area);
    }
