// Problem Link : https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-09/challenges/count-before-one-1

#include <stdio.h>
int count_before_one(int a[],int N)
{
    int count = 0;

    for (int i =0; i<N; i++)
    {
        if (a[i]==1)
        {
            break; // 1 peye gelei shesh noyto loop shesh hoye jabee ar count ta ans asbe
        }
        count++;
    }
    return count;
}
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];

    for (int i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    int result = count_before_one(a, N);
    printf("%d", result);
    return 0;
}
