#include<stdio.h>
#include<stdbool.h>
bool last(int);
int main()
{

    int a;
    printf("enter the number :");
    scanf("%d",&a);
    printf("%d",last(a));

}
bool last(int a)
{

    //if((a+1)%20==0||(a+2)%20==0)
    if(a%20==18||a%20==17)
    {
        return true;
    }
    else
    {
        return false;
    }
}
