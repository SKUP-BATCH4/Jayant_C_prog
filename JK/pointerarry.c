#include<stdio.h>
int main()
{


    int a[]={1,5,3,-1,2};
    int *p=&a[2];
    //int *q=&a[1];
    //p=q-p;
    p--;
    printf("%d\n",*p);
}
