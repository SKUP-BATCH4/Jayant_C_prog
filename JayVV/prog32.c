#include<stdio.h>
void main()
{
    int a[3] ,b[3];
    int i;
    printf("enter the array value: ");
    for(i=0;i<=2;i++){
        scanf("%d",&a[i]);
    }
        for(i=0;i<=2;i++){
        if(a[i]==2 && a[i+1]==3){
           a[i+1]=0;
           }
           printf("%d\t",a[i]);
        }
}
