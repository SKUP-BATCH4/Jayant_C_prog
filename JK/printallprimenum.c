#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    pre(a);

}
void pre(int a)
{
    int i,j, count;
    for(i=1;i<=a;i++)
    {
        int count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
      count++;
        }
        if(count==2)
        printf("%d\n",i);
    }
}
