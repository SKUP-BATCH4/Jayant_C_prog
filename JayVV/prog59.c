#include<string.h>
#include<stdio.h>
struct Employee{
    int empId;
    char empName[20];
    float empSal;
    }e1,e2;
int main()
{
    struct Employee e1={2022549,"Roshan",450000.32};
    printf("%d\n%s\n%.2f",e1.empId,e1.empName,e1.empSal);

}
