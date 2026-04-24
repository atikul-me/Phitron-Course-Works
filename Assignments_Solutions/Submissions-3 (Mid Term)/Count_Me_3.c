// Problem Link : https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-09/challenges/count-me-3

#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d", &T);
     char S[10001];
    for (int i=0; i<T; i++)
    {
        scanf("%s", S);

        int capital = 0, small = 0, digit = 0;

        for (int j=0; S[j]!='\0'; j++)  // Run until Null found
        {
        if (S[j]>= 'a' && S[j]<= 'z')
        {
            small++;
        }
        else if (S[j] >= 'A' && S[j] <= 'Z')  // Conditions
        {
            capital++;
        }
        else
        {
            digit++;
        }
    }
        printf("%d %d %d\n", capital, small, digit);
    }
    return 0;
}
