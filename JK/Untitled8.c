#include<stdio.h>
#define pi 3.142
int main()
{
  int r;
  printf("enter the radius:");
  scanf("%d",&r);
  area(r);
  circumference(r);
}
int area(r)
{
    int area;
    area=pi*r*r;
    printf("Area of circle is:%d\n",area);
    return area;
}
int circumference(r)
{
    int circumference;
    circumference=2*pi*r;
    printf("circumference of the circle is:%d",circumference);
    return circumference;
}
