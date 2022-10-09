#include<stdio.h>
int main()
{
    int count=0;
    char a[100];
    printf("enter the value:");
    gets(a);
   for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]<='z'&&a[i]>='a'||a[i]<='Z'&&a[i]>='A'||a[i]<='0'&&a[i]>='9')
            {
                continue;
        }else
        {
            count++;
        }
        }
        printf("%d",count);
    }
