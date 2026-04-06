#include <stdio.h>
int main ()
{
    printf("Burger Price is 100tk\nFuchka price 60tk\nChips price is 20tk");
    int a;
    scanf("How much money do you have? : %d", &a);

    if(a >= 100)
    {
        printf("I will eat a Burger\n");
    }

    else if(a >= 50)
    {
        printf("I will eat Fuchka\n");
    }

    else if(a >= 20)
    {
        printf("I will eat chips\n");
    }

    else 
    {
        printf("I can't afford a Burger\n");
    }

    return 0;
}