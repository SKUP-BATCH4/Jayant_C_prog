#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values");
    scanf("%d%d%d",&a,&b,&c);
    printf("%s",even(a,b,c));
}
int even(int a,int b,int c)
{
   if(a-b==b-c||b-c==c-a||c-a==a-b)
    // if(a-b==b-c||a-b==c-a||b-a==b-c||b-a==c-a||c-a==c-b||c-a==c-a)
    {

        return "True";
    }
    else
        {
        return "Flase";
    }
}
