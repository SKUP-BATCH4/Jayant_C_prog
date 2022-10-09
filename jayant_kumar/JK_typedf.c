#include<stdio.h>
int main()
{
    typedef bily;
    typedef char bilychar;
    typedef float bilyfloat;
    typedef double bilydouble;
    typedef short bilyshort;
    typedef long bilylong;
    typedef signed bilysigned;
    typedef unsigned bilyunsigned;

    typedef int bilboard;

    bilboard a=123456789;
    bilydouble b=2536145.2145668;



    printf("%d\n",sizeof(bily));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(bilychar));
    printf("%d\n",sizeof(bilyfloat));
    printf("%d\n",sizeof(bilydouble));
    printf("%d\n",sizeof(bilyshort));
    printf("%d\n",sizeof(bilylong));
    printf("%d\n",sizeof(bilysigned));
    printf("%d\n",sizeof(bilyunsigned));
    printf("%d\n",sizeof(bilboard));
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(long double));
    printf("%d\n",sizeof(signed int));

signed int ab;
    ab=100;
    printf("%d",sizeof(ab));







}
