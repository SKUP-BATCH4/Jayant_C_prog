#include<stdio.h>
#include"extern1.c"


int main(){
extern y;
y+=10;
return y;
}

//int y=56;
//int main(){
//printf("%d",check());
//}
//
//
//
//
////    int x;
////extern y;
////printf("%d",y);
//
////int x=10;
//
