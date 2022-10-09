#include<stdio.h>
char* x();

int main(){
x();
}

char* x(){
char *sta[20],*stb[20];
printf("enter the string:\n");

gets(sta);
char *ptr=sta;
printf("%s",ptr);
int p=strlen(ptr);

for (int i;i<p;i++){
    ptr=ptr=i;
    printf("%s",ptr);
}
//for(int i=0;i<5;i++){
//    gets(*sta);
//}
//gets(sta);
//int p=strlen(sta);
//
//for(int i=0;i<5;i++){
//    for(int j=5;j>5;j--){
//        *stb[j]=*sta[i];
//    }
//}

//printf("%s",stb);
}
