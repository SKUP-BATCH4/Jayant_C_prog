#include<stdio.h>
int main()
{
    int a;
    printf("enter the values");
    scanf("%d",&a);
    printf("%s",even(a));
}
int even(int a)
{

    if(a%2==0)
    {
        return "even";
    }
    else{
        return "noteven";
    }

}
