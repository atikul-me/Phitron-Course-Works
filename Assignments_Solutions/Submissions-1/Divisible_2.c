// Problem Link : https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-09/challenges/divisible-2-1-1

#include <stdio.h>
int main()
{
    int i, N;
    scanf("%d", &N);
    
    for (i = 1; i<=N; i++)
    {
        if (i%3==0 && i%7==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
