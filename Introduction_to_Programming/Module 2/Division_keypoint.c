#include <stdio.h>
int main()
{
    float a = 15;
    int b = 2;

    //Here if we take one float and one intiger and it their answer will be in float, we must have to use a float or double datatype according to usecase.

    float div = a/b; 

    printf("%.2f", div);

    return 0;
}