#include <stdio.h>
#include <math.h>
int main()
{
    int value = round(4.3); // less than 0.5
    printf("%d\n", value);

    int value2 = round (4.6); // greater than 0.5
    printf("%d",value2);
    return 0;
}