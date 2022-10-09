#include<stdio.h>
void main()
{
    int unsigned long a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("%u",a>>1);
    }else{
        printf("%u",a<<1);
        }
}
