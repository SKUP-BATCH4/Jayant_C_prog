#include<stdio.h>

void main(){
     int j;
j=display();
printf("%d",j);
printf("%d\n",j);

printf("%d",display());
printf("%d",display());
printf("%d",display());
printf("%d",display());
printf("%d",display());
printf("%d",display());
}


int display(){
static int x=0;
x+=10;
return x;
}
