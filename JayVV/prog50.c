#include<stdio.h>
int main()
{
    int a[4];
    printf("%d",ip(a));

}
int ip(int a[4])
{
     printf("enter the array value:");
    for(int i=0;i<=3;i++)
        {
    scanf("%d",&a[i]);
    }
    if(a[0]==6){
        return 1;
    }else{
    return 0;
    }
}
