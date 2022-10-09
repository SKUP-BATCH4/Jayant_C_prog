
#include<stdio.h>
    struct abc{             //global declaration struct data type. inside the struct's are basic data used to create struct
        int a;
        char b;
        float c;
        }p1,p2,p3;          //global declaration of variable for struct
int main()
{
    struct abc p1={235,'d',45.6};       //initialization    another way for initialization is " v1.a=235; " this is not applicable for strings
    p2.a=324;
    p2.b='r';
    p2.c=34.4;
     struct abc p3={23,'g',4.6};
     printf("%d\n%c\n%.2f",p1);
}
