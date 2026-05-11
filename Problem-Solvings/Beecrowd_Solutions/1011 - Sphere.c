#include <stdio.h>
 
int main() 
{
 double volume, pi = 3.14159;
 int R;
 
 scanf("%d", &R);
 
 volume = (4.0/3 * pi * R*R*R);
 
 printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}