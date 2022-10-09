#include<stdio.h>
void main()
{
    int a[3];
    int b[3];
    int x=0;
    printf("enter the value for array:");
    for(int i=0;i<=2;i++){
        scanf("%d",&a[i]);
    }
    for(int i=2;i>=0;i--){
        b[i]=a[x++];
    }
    for(int i=0;i<=2;i++){

    printf("%d",b[i]);
    }
}
