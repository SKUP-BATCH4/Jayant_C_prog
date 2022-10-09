#include<stdio.h>
void main()
{
    char a[10];
    char *ptr;
    char s[5]={"aeiou"};
    int i,count=0;

    for(int i=0;i<10;i++)
    {
        scanf("%c",&a[i]);
    ptr=&a[i];
    }
    for(i=0;i<5;i++){
    if(ptr==s[i]){
        count++;
    }
    }
    printf("%d",count);
    }
