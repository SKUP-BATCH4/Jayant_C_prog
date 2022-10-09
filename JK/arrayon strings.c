#include<stdio.h>
int main()
{
    int i;
    char  k[100];
    for(i=0;i<4;i++)
    {
    scanf("%d",&k[i]);
    }
    for(i=0;i<4;i++)
    {
        k[100]=&k[i];
    }
    printf("%s\n",*k[i]);

}
