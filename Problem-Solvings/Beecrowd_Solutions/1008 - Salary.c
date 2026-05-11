#include <stdio.h>
 
int main()
{
 int number, worked_hours;
 float per_hour;
 
 scanf("%d %d %f", &number, &worked_hours, &per_hour);
 
 float salary = (float)worked_hours * per_hour;
 
 printf("NUMBER = %d\n", number);
 printf("SALARY = U$ %.2f\n", salary);
 
    return 0;
}