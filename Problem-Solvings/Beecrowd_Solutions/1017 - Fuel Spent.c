#include <stdio.h>
 
int main() 
{
 
 int spent_time, average_speed;
 float fuel_need;
 
 scanf("%d %d", &spent_time, &average_speed);
 
 fuel_need = (float)spent_time * average_speed/ 12;
 
 printf("%.3f\n", fuel_need);
 
    return 0;
}