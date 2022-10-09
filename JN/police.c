#include<stdio.h>
int main()
{
    int speed,bd,c;
    printf("is your birthday today or not?\nIf it is then enter 1 if it is not then enter 0:\n\n");
    scanf("%d",&bd);

    printf("how much is your speed buddy:\n");
    scanf("%d",&speed);


    if(0)
    {
        if(speed<=60)
        {
            printf("no tickets\n");
        }
        else if(speed>=61 && speed<=80)
        {
            printf("small ticket\n");
        }
        else if(speed>=81)
        {
            printf("big ticket\n");
        }
    }
    else
    {
        if(speed<65)
        {
            printf("no tickets\n");
        }
        else if(speed>=66 && speed<=85)
        {
            printf("small ticket\n");
        }
        else if(speed>=86)
        {
            printf("big ticket\n");
        }
    }

}
