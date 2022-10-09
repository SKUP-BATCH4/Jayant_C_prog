#include<stdio.h>
void main()
{
    int count=0,b=0,a[25];
    for(int i=0;i<25;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<25;i++){
        b=b+a[i];
        count++;
    }
    b=b/count;
    printf("%d",b);
}
