#include<stdio.h>
void main()
{
    int i,j,a[10][10];
        printf("enter the value in array:\n");
        for(i=0;i<10;i++){
        for(j=0;j<10;j++){
                a[i][j]=0;
        }
        }
        for(i=0;i<10;i++){
            scanf("%d",&a[i][9]);
        }
        for(i=0;i<10;i++){
        for(j=0;j<10;j++)    {
            printf("\t%d",&a[i][j]);

}
        printf("\n");
}
}
