#include<stdio.h>
int main()
{
    char a='eg',b='fk',c='li';
    printf("enter the values");
    char *ptr1=&a;
    char *ptr2=&b;
    char *ptr3=&c;

    printf("%c\n%c\n%c\n",*ptr1,*ptr2,*ptr3);
   printf("address %x\n%x\n%x",ptr1,ptr2,ptr3);
    //printf("valu of a:%d",a);
}
