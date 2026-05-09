#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);
// change the garbage value by addressing with &

    printf("%d %d %d",a,b,c);
// just print the current value if giving by variables
    return 0;
}