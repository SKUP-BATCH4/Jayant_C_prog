#include<stdio.h>
char* x();
int main(){
x();
}

char* x(){

char *pt,s[20];
int a;

printf("enter the string:\n");
gets(s);
printf("enter the index\n");
scanf("%d",&a);

pt=s+a;
printf("%s",pt);
}

//if(pt=="x"){
//pt=pt+1;
//}
//if(pt=='x'){
//    printf("milad");
//}
