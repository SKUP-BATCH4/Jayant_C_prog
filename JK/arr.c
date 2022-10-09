#include<stdio.h>
int main()
{
    int i=0;
    char str[20];
    printf("enter the value :\n");
    gets(str);
  while(str[i]!=0)
  {
      i++;
  }
  printf("length of the string is  %d",i);
}

