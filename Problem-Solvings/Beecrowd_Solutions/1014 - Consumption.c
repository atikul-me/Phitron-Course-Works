#include <stdio.h>
 
int main() 
{
 
    int X;
    float Y, mileage;
    
    scanf("%d %f", &X, &Y);
    
    mileage = X/Y;
    
    printf("%.3f km/l\n", mileage);
 
    return 0;
}