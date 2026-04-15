// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include <stdio.h>
int main()
{
    int i, N, x, j;
    long long int fact;
    scanf("%d", &N);
    
    for(i=1;i<=N;i++)
    {
        scanf("%d", &x);
        fact = 1;

        for(j=1;j<=x;j++)
        {
            fact = fact * j;
        }
        printf("%lld\n", fact);
    }
    return 0;
}
