#include<stdio.h>
void main()
{
    char name[6];
    int age;
    char mobno[10];
    char adress[1000];
    //a[6]="roshan";
    puts("what is your name:");
    gets(name);
    puts("enter your age");
    gets(age);
    puts("enter your mobile number:");
    gets(mobno);
    puts("adress:");
    gets(adress);
    printf("%s\n%d",name,&age);
     puts (mobno);
      puts(adress);
}
