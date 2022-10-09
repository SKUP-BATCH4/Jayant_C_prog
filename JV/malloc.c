#include<stdio.h>
int main()
{
    int *p,*q;
    p=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    printf("\n");
   for(int i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
    }
    printf("\n");
q=(int*)realloc(p,3*sizeof(int));
        for(int i=0;i<3;i++)
    {
        printf("%d\n",*(p+i));
}
    free(p);
free(q);
}
