#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("We will go to Cox's Bazar\n");

        if(tk >= 10000)
        {
            printf("We will go to Sajek too\n");
        }
        else 
        {
            printf("Will be back to home\n");
        }
    }

    else 
    {
        printf("Will not go to any places\n");
    }

    return 0;
}