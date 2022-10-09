#include<stdio.h>
#include<stdbool.h>>
bool mul(int);
int main()
{
    int a;
    printf("enter the value for a:");
    scanf("%d",&a);
    printf("%d",mul(a));
}
bool mul(int a)
{
   if(a%20==18||a%20==19){
    return true;
   }
}
