#include<stdio.h>
int main()
{
   int i,a[3], *p[3];
   printf("enter the values ;");
   for(i=0;i<3;i++)
   {scanf("%d",&a[i]);}
for(i=0;i<3;i++)
{
    p[i]=&a[i];
    printf("%d\n",p[i]);
}
}

