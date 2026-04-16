// Problem Link : https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-09/challenges/reverse-and-odd/problem

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];

    for (int i=0;i<N;i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i=N-1;i>=0;i--)
    {
        int sum=0;
        sum = i%2;
        if(sum!=0)
        {
        printf("%d ", A[i]);
        }
    }
    return 0;
}
