#include<stdio.h>

int main()
{
//    FILE *fb;
//    fb=fopen("C:/Users/lenovo/Desktop/JV/hosafile.txt","r");
//    char ch[100]="Twinkle Twinkle little star, How I wonder what you are";
//    fputs(ch,fb);
//    fclose(fb);

    /*
        FILE* pf;
        pf=fopen("C:/Users/lenovo/Desktop/JV/wrongfile.txt","w");

        char ch[200];
        int a;
        printf("enter the text:\n");
        gets(ch);
        printf("enter :\n");
        scanf("%d",&a);
        printf("%d",a);
        fputs(ch,pf);

    //    fclose(pf);

        //pf=fopen("C:/Users/lenovo/Desktop/JV/wrongfile.txt","r");
        fprintf(pf,"%d",a);
        fclose(pf);
    */







    FILE* pf=NULL;
    pf=fopen("C:/Users/lenovo/Desktop/JV/wrongfile.txt","r");
    if(pf!=NULL)
    {
        char ch[100];
        printf("hello buddy\n");
        //fprintf(pf,"%s ",ch);





        //char mh;
        for(int i=0; i<100; i++)
        {
            //fputc(ch,pf);
            ch[i]=fgetc(pf);
        }
        fprintf(pf,"%c ",ch);
        //fputc(ch,pf);
        fclose(pf);
    }
    else
        printf("ERROR");



}
