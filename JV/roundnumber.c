
#include<stdio.h>
#include<math.h>

int a,b,c,sum;
int main()
{

    printf("enter the values a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);

    printf("\n%d\n%d\n%d\n",a,b,c);
    sum=a+b+c;

    printf("before round of\n");
    printf("sum is: %d\n",sum);

    printf("after round of\n");
    int rou=(sum/10)*10;
    printf("%d",rou);

    FILE* pf;
    pf=fopen("wrongfile.txt","a");
    //char mon[20];

    fprintf(pf," %d",rou);
    fclose(pf);
}
