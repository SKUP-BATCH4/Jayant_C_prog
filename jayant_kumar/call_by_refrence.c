#include<stdio.h>s

int func(int*,int*);

int main(){
int x=20,y=10;
printf("%d  %d\n",x,y);
func(&x,&y);
}

int func(int*x,int*y){
*x=30;
*y=120;

printf("%d  %d\n",*x,*y);
}
