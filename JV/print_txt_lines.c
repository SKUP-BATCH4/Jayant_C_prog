#include<stdio.h>
int main(){
FILE* pt;
pt=fopen("wart.txt","r");
char ch[200];
int count=0;
//fputs(ch,pt);

while(!feof(pt)){
fgets(ch,200,pt);
    count++;

//}

}
printf("%d",count);
fclose(pt);
}
