#include<stdio.h>
void main()
{
    int a,b,c,ab,ac,bc;
    printf("enter the number");
    scanf("%d%d%d",&a,&b,&c);
    d(a,b,ab,bc,ac);
    e(a,b,ab,bc,ac);
    f(a,b,ab,bc,ac);
}
int d(int a,int b,int ab,int bc,int ac)
{
    ab=a+b;
        if(ab==10){
        return 10;
    }else if(ab==(bc+10)||ab==(ac+10)){
             return 5;
             }else{
             return 0;
             }

}
int e(int bc,int ab,int b,int c,int ac)
{
        bc=c+b;
    if(bc==10){
        return 10;
         }else if(bc==(10+ab)||ab==(10+ac)){
             return 5;
             }else{
             return 0;
             }
}
int f(int a,int c,int ab,int bc,int ac)
{
        ac=a+c;
    if(ac==10){
        return 10;
         }else if(ac==(10+bc)||ab==(10+ab)){
             return 5;
             }else{
             return 0;
             }
}
