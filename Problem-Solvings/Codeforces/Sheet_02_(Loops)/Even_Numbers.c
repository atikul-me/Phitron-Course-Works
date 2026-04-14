// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

#include <stdio.h>
int main()
{
    int i, N;
    scanf("%d",&N);
    for(i=2; i<=N; i+=2)
    {
        printf("%d\n", i);
    }
    if(N==1)
    {
        printf("-1");
    }
    return 0;
}
