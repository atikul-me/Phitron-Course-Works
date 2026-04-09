// Problem Link : https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-09/challenges/divisible-4

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    
    if (N%3==0)
    {
        printf("YES");
    }
    
    else
    {
        printf("NO");
    }
    return 0;
}
