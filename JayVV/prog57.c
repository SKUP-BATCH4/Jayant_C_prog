#include<stdio.h>
int main()
{
    int count=0;
    char a[100];
    printf("enter the value:");
    gets(a);
    while(a[count]!=0)
    {
        count++;
    }
    printf("%d",count);

}
