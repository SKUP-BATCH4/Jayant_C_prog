#include<stdio.h>
//int spy(int);
    int num,a,sum=0,multi=1;
int main()
{
    printf("enter the values : ");
    scanf("%d",&num);
    spy(num);

    if(multi==sum){
        printf("spy");
    }else{
    printf("not spy");}
}

spy(int num){

while(num>0){

    a=num%10;
    sum=sum+a;
    multi=multi*a;
    num=num/10;
}

}

