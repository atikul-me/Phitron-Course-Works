#include <stdio.h>
int main()
{
  int age, value;

scanf("%d", age);

//Year
value = age / 365;
printf("%d ano(s)\n", value);

//Month
value = (age % 365) / 30;
printf("%d mes(es)\n", value);

//Days
value = (age % 365) % 30;
printf("%d dia(s)\n", value);

return 0;
}