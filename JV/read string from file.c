#include<stdio.h>

int main()
{
//    FILE *fb;
//    fb=fopen("C:/Users/lenovo/Desktop/JV/hosafile.txt","r");
//    char ch[100]="Twinkle Twinkle little star, How I wonder what you are";
//    fputs(ch,fb);
//    fclose(fb);


        FILE* pf;
        pf=fopen("wrongfile.txt","r");
        char ch[200];

fgets(ch,59,pf);

        printf("%s",ch);
        fclose(pf);
}

