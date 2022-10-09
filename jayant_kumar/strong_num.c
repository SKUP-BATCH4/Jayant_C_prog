/*
#include<stdio.h>

int factor(int i){
if(i<1){
    return 1;
}
return i*factor(i-1);
}


int main(){
int i=1;
for(int a=1;a<=4;i++){
printf("factorial of %d is: %d",factor(a));
}
return 0;
}
*/


#include<stdio.h>
int sums(int);   //declaring function for sum all factorials
int facts(int);  //declaring function for factorial of digits
int a,last;     //

int main(){
int a;
printf("enter the number:\n");
scanf("%d",&a);
sums(a);
}

sums(int a){
int sum=0,org=a;

while(a!=0){
    last=a%10;
    a=a/10;
    sum=sum+facts(last);
    //printf("%d\n",sum);
}
if(org==sum){
printf("strong number");
}else{
printf("not a strong number");}
}


facts(int last){
int fact=1,i;
for(i=1;i<=last;i++){
    fact=fact*i;
}
    return fact;
}
