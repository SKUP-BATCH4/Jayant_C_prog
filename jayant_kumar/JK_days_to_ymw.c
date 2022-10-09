#include<stdio.h>
#include<time.h>
int main(){
    float d;
float y,m,w;
printf("No.of Days: ");
scanf("%f",&d);
y=d/365;
m=d/30;
w=d/7;
printf("years:%f\t Months:%f\t Weeks:%f\t",y,m,w);
}
