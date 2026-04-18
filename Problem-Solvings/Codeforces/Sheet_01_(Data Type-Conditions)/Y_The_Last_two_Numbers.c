// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include <stdio.h>
int main()
{
    long long int A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);// Long input
    
    long long int sum = 0;// long output , garbage value null
    sum = (A*B)%100;
    sum = (sum*C)%100;
    sum = (sum*D)%100;
    
    printf("%02lld", sum); // 02lld for getting last 2 digit output

    return 0;
}