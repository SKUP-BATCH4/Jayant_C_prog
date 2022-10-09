#include<stdio.h>
void main()
{
    char a[]="jadklaj";
    printf("%s\n",a);
    if(isupper(a)){
    strlwr(a);
//    }else{
//        strupr(a);
    }
    printf("%s",a);
}
