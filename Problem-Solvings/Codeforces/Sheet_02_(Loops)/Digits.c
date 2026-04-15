// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i=1; i<=t; i++)
    {
        int N;
        scanf("%d", &N);
        if(N==0)
        {
            printf("0");
        }
        while(N != 0)
        {
            printf("%d ", N%10);
            N/=10;
        }
        printf("\n");
    }
    return 0;
}
