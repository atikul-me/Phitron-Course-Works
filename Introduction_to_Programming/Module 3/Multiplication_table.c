#include <stdio.h>
int main()
{
int num;

printf("Enter number : ");
scanf("%d", & num);

int i, math;

for(i = 1; i<= 10; i++)
{
     math = num * i;
     printf("%d x %d = %d", num, i, math);
}
printf("\n");

    return 0;
}
