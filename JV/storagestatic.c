#include<stdio.h>
static int v;    //program scope
static char v1;
static float v2;
static char  v3[];
//register int klk=10;
int main(){
//int j=2; //local variable scope
static int j;    //program scope
static char j1;
static float j2;
static int mm=90;
void jj(){
int jv=10;   //function scope
}
printf("v1 %c\n",v1);
printf("v2 %f\n",v2);
printf("v %d\n",v);
printf("v3 %s\n",v3[]);

printf("j1 %c\n",j1);
printf("j2 %f\n",j2);
printf("j %d\n",j);

}


void vv(){


static int jv=30;
printf("v %d\n",v);
printf("jv %d\n",jv);
}

