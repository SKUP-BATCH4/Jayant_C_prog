#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a[10],i;
    printf("enter the number :");
for(i=0;i<=10;i++)
{
    scanf("%d",&a[i]);
}
    printf("%d",array(a[i]));
}
bool array( int a[10])
{
if(a[0]==6)
{
    return true;

}
else
    {
        return false;
}
}

