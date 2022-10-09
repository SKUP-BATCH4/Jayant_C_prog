#include<stdio.h>
#include<string.h>
typedef struct Employee{
                int empid;
                char name[20];
                float salary;
}Emp;
int main(){
    Emp e1={2022549,"Roshan",45000.00};
    Emp e2={2022548,"naveen",45000.00};
    printf("empid \t name \tsalary\n");
    printf("%d\t%s\t%.2f\n",e1.empid,e1.name,e1.salary);
    printf("%d\t%s\t%.2f",e2.empid,e2.name,e2.salary);
}
