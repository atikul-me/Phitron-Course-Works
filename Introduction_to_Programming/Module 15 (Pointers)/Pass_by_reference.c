#include <stdio.h>
int main()
{
    #include <stdio.h>
void fun(int val)
{
    int x = 20;
    printf("Fun function X address : %p\n",&x);
}
int main()
{
    int x = 10;
    fun(x);
    printf("Main Function X address : %p\n",&x);
    return 0;
}
    return 0;
}