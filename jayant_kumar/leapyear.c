#include<stdio.h>
void main()
{
    int k;
    printf("%enter the no. of days:",k);
    scanf("%d",&k);
    k==366|k==400 ? (printf("leap year")) : (printf("not a leap year"));
}
