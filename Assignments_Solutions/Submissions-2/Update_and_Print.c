// Problem Link : https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-09/challenges/update-and-print/problem

#include <stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);
    int A[N];

    for (i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
    }
    int X, V;
    scanf("%d %d", &X,&V);

    for (i=N-1;i>=0;i--)
    {
        A[X]=V;
        printf("%d ", A[i]);
    }

    return 0;
}
