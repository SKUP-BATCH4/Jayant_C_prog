#include<stdio.h>
int main()
{

    int i,j,k,a=3,b=3,c=3;
    char ar1[3]={'r','o','s'};
//    printf("enter array1:");
//    for(i=0;i<a;i++){
//        scanf("%c",&ar1[i]);
    char ar2[3]={'r','o','s'};
//    printf("enter array2:");
//    for(i=0;j<b;j++){
//        scanf("%c",&ar2[i]);
    char ar3[3]={'r','a','f'};
//    printf("enter array3:");
//    for(i=0;k<c;k++){
//        scanf("%c",&ar3[i]);
    while(ar1[i]<a&&ar2[j]<b&&ar3[k]<c)
                if((ar1[i]==ar2[j])&&(ar2[j]==ar3[k])){
                    printf("%c",ar1[i]);
                    i++;
                    j++;
                    k++;
                }else if(ar1[i]<ar2[j]){
                    i++;
                }else if(ar2[j]<ar3[k]){
                    j++;
                    }else{
                      k++;
                    }
            }
