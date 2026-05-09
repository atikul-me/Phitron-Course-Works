#include <stdio.h>
int main()
{
    int x = 10;

    // Now taking pointer variable

    int* ptr;
    ptr = &x;
    *ptr = 200; // Dereference is like decoding and changing value

    printf("%d",*ptr);

    
    return 0;
}