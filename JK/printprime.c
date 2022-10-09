#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    prime( n);
}
        void prime(int a)
 {

 int i ,j;
 for(i=1;i<=a;i++)
 {int count=0;
 for(j=1;j<=i;j++)
    {
        if(i%j==0)
            count++;
        }

        if(count==2)
            printf("%d\t",i);
            }
        }

