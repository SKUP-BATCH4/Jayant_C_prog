//3d array
#include<stdio.h>
void main()
{
    int i,j,k,a[2][3][3];
    printf("enter the array value:");
    for(i=0;i<=1;i++){
        for(j=1;j<=2;j++){
              for(k=0;k<=2;k++){
                a[i][j][k]=0;
                scanf("%d",&a[i][3][k]);
              }
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<=2;j++){
              for(k=0;k<=2;k++){
                printf("\t%d",a[i][j][2]);
              }
              printf("\n");
}
        printf("\n");
    }


}
