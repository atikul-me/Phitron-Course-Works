// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

#include <stdio.h>
int main()
{
    int N, age=0;
    scanf("%d", &N);

    // Years
    age = N/365;
    printf("%d years\n", age);

    // Months
    age = (N%365)/30;
    printf("%d months\n", age);

    // Days
    age = (N%365)%30;
    printf("%d days\n", age);

    return 0;
}