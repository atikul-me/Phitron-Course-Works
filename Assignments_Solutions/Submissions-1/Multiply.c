// Problem Link : https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-09/challenges/multiply-16-2

#include <stdio.h>
int main()
{
    long long int A, B, sum=0;
    
    scanf("%lld %lld", &A, &B);
    
    sum = A*B;
    
    printf("%lld", sum);
    
    return 0;
}
