// Problem Link : https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-09/challenges/sum-sum-2/problem

#include <stdio.h>
int main()
{
    int N, sum1=0, sum2=0;
    scanf("%d",&N);
    int V[N];

    for (int i=0;i<N;i++)
    {
        scanf("%d", &V[i]);
        if (V[i]>0)
        {
            sum1 = sum1 + V[i];
        }
        if(V[i]<0)
        {
            sum2 = sum2 + V[i];
        }
    }
    printf("%d %d", sum1, sum2);
    return 0;
}
