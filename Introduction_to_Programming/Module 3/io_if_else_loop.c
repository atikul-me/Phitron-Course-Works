#include <stdio.h>
#include <math.h>

int main()
{
float l, w;

printf("Length and Width : ");
scanf("%f %f", &l, &w);
printf("\n");

float area = l * w;
float perimeter = 2 * (l + w);
float diagonal = sqrt (l * l + w * w);

printf("Area = %f\n", area);
printf("Perimeter = %f\n", perimeter);
printf("Diagonal = %f\n", diagonal);

int i;

for (i = 1; i <= 4; i++)
{
    printf("%d\n", i);
}
printf("\n");

int j = 1;

while (j <= 5)
{
    printf("%d\n", j);
    j++;
}
printf("\n");

int k = 1;

do
{
    printf("%d\n", k);
    k++;
} 
while (k <= 6);
printf("\n");

int exit;
while(1)
{
    printf("Do you want to exit ?\n\n");
    printf("Press 1 to exit and 2 for not : ");
    scanf("%d", & exit);
    printf("\n");

    if (exit == 1)
    {
        printf("Thanks, Have a good day");
        break;
    }

    else if (exit == 2)
    {
        printf("You have to exit anyway, so best of luck");
        break;
    }

    else
    {
        printf("403 error\n\n");
    }
}

    return 0;
}
