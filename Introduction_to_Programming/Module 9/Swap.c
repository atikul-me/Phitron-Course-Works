#include <stdio.h>
int main()
{
    int a, b, tmp;
    a = 10;
    b = 20;
    tmp = a;

    a = b;
    b = tmp;

    printf("A = %d\nB = %d", a, b);
    return 0;
}