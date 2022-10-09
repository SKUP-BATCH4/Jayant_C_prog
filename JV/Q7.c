#include<stdio.h>

//int func(int, int);
int main(){
  int num=0xF3;
  int pos1,pos2;

  printf("number is:  %x\n\n",num);
  printf("enter the bit pos1:\n");
  scanf("%d",&pos1);
    //for set the bit
    num=num|(1<<pos1);
    printf("number after set pos1 %d\n\n",num);

 printf("enter the bit pos2:\n");
  scanf("%d",&pos2);

 num=num|(1<<pos2);
    printf("number after set pos2 %d\n\n",num);

//    //for checking bit is clear or set
//
//
for(int i=0;i<3;i++){
printf("enter pos1:\n");
scanf("\n%d",&pos1);
int res=num&(1<<pos1);
    if(res==0)
    {
    printf("bit is clear\n\n");
    }else
    {
        printf("bit is set\n\n");
    }
}
}
