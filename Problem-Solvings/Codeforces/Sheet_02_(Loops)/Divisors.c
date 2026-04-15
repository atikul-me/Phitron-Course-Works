// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

#include <stdio.h>
int main()
{
    int i,N;
    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        if(N%i==0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
