#include<stdio.h>
int main()
{
    char i=0;
    int str[20];
    printf("enter the value :\n");
    gets(str);
  while(str[i]!=0)
  {
      ++i;
  }
  printf("length of the string is  %d",i);
}
