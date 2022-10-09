
#include<stdio.h>
#include<string.h>
int main()
{
    FILE* pf=NULL;
    pf=fopen("wrongfile.txt","r");
    char h[200];

while(!feof(pf)){

    fgets(h,50,pf);
    printf("%s",h);
}
    fclose(pf);
}

