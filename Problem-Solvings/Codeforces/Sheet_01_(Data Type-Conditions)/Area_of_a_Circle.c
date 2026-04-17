// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

#include <stdio.h>
int main()
{
    double R, pi = 3.141592653, Area=0.00;
    scanf("%lf", &R);

    Area = pi*(R*R);
    
    printf("%.9lf", Area);
    return 0;
}
