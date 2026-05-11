#include <stdio.h>
 
int main() 
{
 char name[50];
 double fixed_salary, gross_month_sales, total;
 
 scanf("%s %lf %lf", &name, &fixed_salary, &gross_month_sales);
 
 total = (gross_month_sales * 0.15) + fixed_salary;
 
 printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}