// Problem Link : https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-09/challenges/count-me-2-1

#include <stdio.h>
int main()
{
    int N, count1=0, count2=0;
    scanf("%d", &N);
    int A[N];

    for (int i=0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i]%2==0 && A[i]%3==0) // divisible by 2 and 3 will consider for 2
        {
            count1++; 
        }
        else if (A[i]%2==0)
        {
            count1++;
        }
        else if(A[i]%3==0)
        {     
            count2++;
        }
    }
    printf("%d %d", count1, count2);

    return 0;
}
