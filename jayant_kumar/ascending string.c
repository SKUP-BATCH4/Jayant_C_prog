//write a program to accept a string and arrange the letters in ascending order.

#include<stdio.h>

int main(){
    char jane[20]="aedcb";
char temp;
for(int i=0;i<20;++i){
    for(int j=i+1;j<20;++j){
            if(jane[i]>jane[j]){
        temp=jane[i];
        jane[i]=jane[j];
        jane[j]=temp;
            }
    }
printf("%c",jane[i]);
}
}
