#include<stdio.h>
int jain(int);

int main(){
int a;
printf("enter the number\n");
scanf("%d",&a);
printf("%d",jain(a));

}

//recursion function

int jain(int a){
int k;
if(a<0){
    a=0;
}

return k+jain(a-1);
}
