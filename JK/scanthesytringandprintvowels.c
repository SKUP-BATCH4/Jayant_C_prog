#include<stdio.h>
int main()
{

    char s[100];
    char *p;
    int vcount=0,count=0;
    printf("enter the string here :");
    gets(s);


    p=s;
    while(*p!='\0')
    {
        if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
            vcount++;
        else
            count++;
        p++;

    }
    printf("total vowel %d\n ;"vcount);
     printf("total remaing %d\n ;"count);
      printf("total vowel %d\n ;"vcount+count);
      return 0;
}








    }
