#include <stdio.h>
void fun(int* x) // catching the address by pointer x variable
{
    *x = 20; // going back to x and change the value to 20

}
int main()
{
    int x = 10;
    fun(&x); // throwing x address to fun function

    printf("X : %d\n",x); // all done and print, x = 20
    return 0;
}
