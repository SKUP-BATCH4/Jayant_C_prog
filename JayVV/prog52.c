#include<stdio.h>
int main()
{
    int a[4];
    printf("enter the array value:");
    for(int i=0;i<=3;i++)
        {
    scanf("%d",&a[i]);
    }


}
int ip(int a[4])
{
    if(a[0]==6){
         printf("%d",ip(a));
    }else{
    return 0;
    }
}
