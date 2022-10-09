#include<stdio.h>
void main()
{
    int i,arr[3];
    printf("enter the value for array:");
    for(i=0;i<=2;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]==6 || arr[2]==6){
        printf("true");
        }
        else{
                printf("false");
        }
}
