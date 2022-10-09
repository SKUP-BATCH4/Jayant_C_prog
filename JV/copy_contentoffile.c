#include<stdio.h>
int main()
{
    FILE* wa;
    wa=fopen("wart.txt","a");

    FILE* wr;
    wr=fopen("wrongfile.txt","r");

    char ch[200];
    char bh[200];
    int count=0;

    while(!feof(wr))
    {
        fgets(ch,54,wr);
        fputs(ch,wa);
    }


//    fgets(ch,209,wr);
//    printf("%s\n",ch);

    //closing files here
    fclose(wa);
    fclose(wr);


    wr=fopen("wrongfile.txt","w");

    fclose(wr);

}






/*

#include<stdio.h>
int main()
{
    FILE* wa;
    wa=fopen("wart.txt","r");

    FILE* wr;
    wr=fopen("wrongfile.txt","a");

    char ch[200];
    char bh[200];
    int count=0;

    while(!feof(wa))
    {
        fgets(ch,54,wa);
        fputs(ch,wr);
    }


//    fgets(ch,209,wr);
//    printf("%s\n",ch);

    //closing files here
    fclose(wa);
    fclose(wr);


    wa=fopen("wart.txt","w");

    fclose(wa);

}
*/
