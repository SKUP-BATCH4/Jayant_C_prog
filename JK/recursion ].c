#include<stdio.h>
int main()
{
int n,res;
printf("enter the number");
scanf("%d",&n);
 res=fact(n);
 printf("%d",res);
 }
 int fact(int n)
 {
 int res;
 if(n==0)
 {
 res=1;
 }
 else
 {
 res=n*fact(n-1);

 }
 return res;
 }
