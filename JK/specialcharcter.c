#include<stdio.h>
int main()
{
    char a[20];
    int i,count=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>=48&&a[i]<=57)||(a[i]>=97&&a[i]<=123))
        {
            count++;
        }
    }
    printf("%d\n",count);
}
