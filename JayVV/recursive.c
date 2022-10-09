#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",rec(a));
}
int rec(int a){
    if(a==1){
        return 1;
    }
    else{
        return 1+rec(a-1);
    }
    }
