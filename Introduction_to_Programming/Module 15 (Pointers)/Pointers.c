#include <stdio.h>
int main()
{
    int x = 10;
    printf("%d\n",x);
    printf("%p\n\n",&x);

    // Now taking pointer variable

    int* ptr;
    ptr = &x;
    printf("%p\n",ptr);
    printf("%p",&ptr);
    
    return 0;
}