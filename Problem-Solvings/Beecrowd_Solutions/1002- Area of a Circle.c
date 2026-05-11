// Problem Link : https://judge.beecrowd.com/en/problems/view/1002

#include <stdio.h>

int main()
{
float R, A;
float PI = 3.14159;

printf("Enter the radius of the circle: ");
scanf("%f", &R);

A = PI * R * R;
printf("The area of the circle is: %.4f\n", A);

    return 0;
}
