#include <stdio.h>
int main ()
{
    printf("Burger Price is 100\n");
    int a;
    scanf("How much money do you have? : %d", &a);

    if(a >= 100)
    {
        printf("I will eat a Burger\n");
    }

    else 
    {
        printf("I can't afford a Burger\n");
    }

    return 0;
}