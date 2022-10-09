#include<stdio.h>
int main()
{
    int a=1,size,message;
int arbitration(int size,int message);
int b(message),c(message);
while(a<size)
    {
        printf("enter the number of CAN messages:",a);
       // scanf("%d",&size);

        for (int i=0;i<=message;i++)
        {
            scanf("%d",&b[i]);
        }
        a++;
        printf("enter the number of CAN messsages:",a);
        for(int i=0;i<=message;i++)
        {
            scanf("%d",&c[i]);
        }}
for(int i=0;i<=message;i++)
{
    if(b[i]==0&c[i]==0)
        i++;
    else if(b[i]==0&c[i]!=0);
    i++;
    else if (b[i]=1&c[i]=1);
    return 1;
    else
        break;

}

main()
{
int size,message;
printf ("enter number of CAN messages");
scanf("%d",&size);
printf("enter the number of CAN messages");
scanf("%d",&message);
int res=arbitration(size,message);
if(res==0)
    {
   printf("message ID wins the arbitration");
   }
else
{
    printf("message ID will not win the arbitration");
}
