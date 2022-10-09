#include<stdio.h>
//#define pi 3.14
void main(){
    int r;
    const pi=22/7;
    float area,circum;

printf("enter the radius:");
scanf("%d",&r);
    area=pi*r*r;
printf("area of Circle: %f\n",area);
    circum= 2*pi*r;
printf("circumference of the circle: %f\n",circum);
}
