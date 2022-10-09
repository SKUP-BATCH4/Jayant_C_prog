/*
#include<stdio.h>
#define cnd int

cnd che(cnd value);

cnd main(){
cnd litend=0x0a0b0c0d;
cnd bigend=0;

bigend=che(litend);
printf("little endian=%x\n",litend);
printf("bigend=%x\n",bigend);

return 0;
}

cnd che(cnd value){
cnd result=0;
result |= (value & 0x000000ff)<<24;
result |= (value & 0x0000ff00)<<8;
result |= (value & 0x00ff0000)>>8;
result |= (value & 0xff000000)>>24;

return result;
}
*/


#include<stdio.h>

int che(int value);  //declareing function here
int main(){       //main function
int litend=0x11223344;      //this is our little endian
int bigend=0;            //this big endian initiallized with 0

bigend=che(litend);      // function change  litend
printf("little endian=%x\n",litend);
printf("bigend=%x\n",bigend);

return 0;
}

int che(int value){
int result=0;
result |= (value & 0x000000ff)<<24;
result |= (value & 0x0000ff00)<<8;
result |= (value & 0x00ff0000)>>8;
result |= (value & 0xff000000)>>24;
return result;
}
