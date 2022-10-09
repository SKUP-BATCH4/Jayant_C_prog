#include<stdio.h>

struct padding
{
    char a;
    int d;
}v1;

int main()
{
    struct padding *v1;
        struct padding *ptr=&v1;
        scanf("%d",ptr->d);

   printf("%d",*ptr);
}
