// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

#include <stdio.h>
int main()
{
    int A, B;
    char S; // Single character Input
    scanf("%d", &A);
    scanf("%c", &S);
    scanf("%d", &B);

    long long int sum=0, minus=0, add=0, divide=0;
    // for long output
    if(S=='+') // '' can only take character
    {
        sum= (long long int)A+B;  // Turning the output ready for lld output
        printf("%lld", sum);
    }
    else if(S=='-')
    {
        minus = (long long int)A-B;
        printf("%lld", minus);
    }
    else if(S=='*')
    {
        add = (long long int)A*B;
        printf("%lld", add);
    }
    else 
    {
        divide = (long long int)A/B;
        printf("%lld", divide);
    }
    return 0;
}