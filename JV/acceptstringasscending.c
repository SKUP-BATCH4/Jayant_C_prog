#include<stdio.h>
void main()
{
    //int n;
    char a[10]={"yutrtyu"};
    char temp;
    for(int i=0;i<10;++i)
    {
        for(int j=i+1;j<10;++j)
        {
            if(a[i]>a[j])
            {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            }
        }
    printf("%c",a[i]);
    }
    }
