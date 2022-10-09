/*
#include<stdio.h>
int jane(int ,int);
int a,b,s;

int main(){
int (*ptr)(int a,int b)=&jane;
printf("enter the value:\n");
scanf("%d\n%d",&a,&b);

ptr(a,b);
//printf("%d",s);

}

int jane(int a,int b)
{
    printf("%d \n%d",a,b);
}
*/


#include<stdio.h>                 //header file
int jane(int ,int);               //declaring function here
int a,b,s;                        //declaring variables here

int main(){                       //main function starting here
int (*ptr)(int a,int b)=&jane;    //declaring and initialization of function pointer
printf("enter the value:\n");     //prinitng asking for values
scanf("%d\n%d",&a,&b);            //taking values of a and b from user
ptr(a,b);                         //using function pointer
}


int jane(int a,int b)             //user defined function  in which we are passing values of a and b
{
    printf("%d \n%d",a,b);        //printing the values of a and b
}
