#include <stdio.h>
#include <string.h>
int main()
{
    char s[5];
    fgets(s,5,stdin);
    printf("%s", s);
    return 0;
}

// fgets() takes enter as an input in string