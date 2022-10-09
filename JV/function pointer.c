#include<stdio.h>
/*int sum(int,int);
int a,b;
int sum(int a,int b)
{
    return a+b;
}
void main()
{
    int s;
    printf("enter the a values for a and b:\n");
    scanf("%d%d",&a,&b);
    int (*ptr)(int a,int b)=&sum;
    s=(*ptr)(a,b);
    printf("%d",s);

}*/
char name(char);
//char s[10];
char s;
int main()
{
    printf("enter the name:\n");
    scanf("%s",&s);
    char s[10];
    char (*ptr)(char s[10])=&name;
    s=(*ptr)(char s[10]);
}
char name(char s[])
{
    printf("%s",s);
}
