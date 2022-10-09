
#include<stdio.h>

struct naveen
{
    int a,b,sum;
}v1;



int main()
{

   struct naveen v1;
   add( v1);
}


int add( struct naveen v1)
{
 struct naveen *ptr;
 ptr=&v1;
    v1.a=50;
    v1.b=20;
    v1.sum=v1.a+v1.b;
    printf("%d",ptr->sum);
}
