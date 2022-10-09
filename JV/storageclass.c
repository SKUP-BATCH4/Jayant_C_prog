#include<stdio.h>
int v=10;    //program scope
//register int klk=10;
int main(){
int j=2; //local variable scope

register int mm=90;
void jj(){
int jv=10;   //function scope
}
printf("mm %d\n",mm);


printf("v %d\n",v);
vv();
}


void vv(){


register int jv=30;
printf("v %d\n",v);
printf("jv %d\n",jv);
}
