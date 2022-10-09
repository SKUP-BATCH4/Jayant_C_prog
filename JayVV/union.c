#include<stdio.h>
union student{
            char b;
            int a;
};
int main()
{
    union student F;
    printf("%d",sizeof(F));
}
//            float per;
//            char grade;
//            }stu;
//            int main()
//            {
//                union student s1m,s1r,s1p,s1g;
//                s1m.mark=85;
//                s1r.regno=357852;
//                s1p.per=8.5;
//                s1g.grade='a';
//                printf("%d\t%d\t%.2f\t %c",s1m.mark,s1r.regno,s1p.per,s1g.grade);
//            }
