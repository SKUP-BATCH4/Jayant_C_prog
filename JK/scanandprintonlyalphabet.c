#include<stdio.h>
int main()
{
    char a[20];
    int i,count=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        {
            count++;
        }
    }
    printf("%d\n",count);
}

