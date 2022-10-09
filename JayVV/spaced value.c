#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value for a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    space(a,b,c);
}
int space(int a,int b,int c)
{
    if((a-b)==(b-c)||(b-c)==(a-c)||(c-a)==(a-b)){
        printf("true");
    }else{
    printf("false");
    }
}
