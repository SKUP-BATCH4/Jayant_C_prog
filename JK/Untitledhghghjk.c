#include<stdio.h>
int main()
{
    int i,a[5];
    int avg,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("average is:%d",avg);
}

