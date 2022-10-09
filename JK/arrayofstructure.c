#include<stdio.h>
struct std
{
    int tm;
    float cgpa;
    char grade;
    char name[12];
};
void main()
{
    int i;
    struct std s[4];
    for (i=0;i<4;i++)
    {

        scanf("%s %d %c %f",&s[i].name,&s[i].tm,&s[i].grade,&s[i].cgpa);
     printf(" \n name of student : %s\n  the marks is :%d\n the Grade is :%c\n the cgpa %0.2f\n ",s[i].name,s[i].tm,s[i].grade,s[i].cgpa);

    }

   /*for (i=0;i<3;i++)
    {
        printf(" \n the marks of  %d\n  the cgpa is %0.2f\n the Grade is %c\n",s[i].tm,s[i].cgpa,s[i].grade);
    }*/
}
