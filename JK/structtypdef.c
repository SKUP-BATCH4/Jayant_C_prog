#include<stdio.h>
typedef struct student
{
int a;
char b[10];
float c;
}std;

int main()
{

    std k={10,"kumar",55.2};
    printf("%d\n %s\n %.2f\n",k.a,k.b,k.c);
}
