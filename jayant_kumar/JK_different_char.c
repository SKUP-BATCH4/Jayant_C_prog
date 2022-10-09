//Write a program to get input from user to print the charecter

#include<stdio.h>

int main(){
char char1 ,char2;
printf("Enter your character value1:\n");
scanf("%c",&char1);
printf("Enter your character value2:\n");
scanf("%c",&char2);
printf("Values entered by user:\n%c ",char1,char2);
return 0;
}
