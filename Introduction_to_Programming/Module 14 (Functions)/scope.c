#include <stdio.h>
// int x = 20 [Global Variable] Scope is whole code
int sum()
{
    int x = 20;
    printf("%d\n",x);
}
int main()
{
    int x = 10;
    printf("%d\n",x);
    sum();   // Calling sum function
    return 0;
}