#include<stdio.h>


int main()
{
    int num=0x06;
    int CIS,C1OUT,C2OUT;

    printf("number is:  %x\+n\n",num);
    printf("enter the bit CIS:\n");
    scanf("%d",&CIS);


    //for set the bit
    num=num|(1<<pos1);
    printf("number after set pos1 %d\n\n",num);

    printf("enter the bit pos2:\n");
    scanf("%d",&pos2);

    num=num|(1<<pos2);
    printf("number after set pos2 %d\n\n",num);


    //for checking bit is clear or set

    for(int i=0; i<3; i++)
    {
        printf("enter pos1:\n");
        scanf("\n%d",&pos1);
        int res=num&(1<<pos1);
        if(res==0)
        {
            printf("bit is clear\n\n");
        }
        else
        {
            printf("bit is set\n\n");
        }
    }
}
