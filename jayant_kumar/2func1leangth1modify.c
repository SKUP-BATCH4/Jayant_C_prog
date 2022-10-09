#include<stdio.h>
int stri1();
char stri2();
char s[20];
int a;
int main(){

stri2();
}

int stri1(){
printf("enter the string\n");
scanf("%s",&s);
a=strlen(s);
printf("%d",a);
//printf("%s",stri[20]);   //hit and try i am doing

}

char stri2(){

    stri1();
for(int i=0;s[i]!='/0';i++){
    if(s[i]<='a' && s[i]<='z'){
        s[i]=s[i]-32;
    }
}
printf("%s",s);
return 0;
}
