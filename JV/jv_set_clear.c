#include<stdio.h>
int main()
{
    int num,pos,res;
    printf("enter the number:\n ");
    scanf("%d",&num);
    printf("enter the position:\n");
    scanf("%d",&pos);

    printf("number before set:%d\n",num);

    /*
    //for set the bit
    num=num|(1<<pos);
    printf("number after set %d\n",num);
    */

    /*
    //for clear the bit
    num=num&~(1<<pos);
    printf("number after set %d\n",num);
    */

    /*
    //for toggle the bit
    num=num^(1<<pos);
    printf("number after set %d\n",num);
    */


//for checking bit is clear or set
    res=num&(1<<pos);
    if(res==0)
    {
    printf("bit is clear");
    }else
    {
        printf("bit is set");
    }
}
