// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <stdio.h>
int main()
{
    int a, b , c;
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if(b>max) max = b;
    if(c>max) max = c;

    int min = a;
    if(b<min) min = b;
    if(c<min) min = c;

    int mid;
    if(a<max && a>min)
    {
        mid = a;
    }
    else if (b<max && b>min)
    {
        mid = b;
    }
    else if(c<max && c>min)
    {
        mid = c;
    }
    else if (a==b || a==c)
    {
        mid = a;
    }
    else if(b==a || b==c)
    {
        mid = b;
    }
    else if(c==a || c==b)
    {
        mid = c;
    }
    printf("%d\n%d\n%d\n\n", min, mid, max);
    printf("%d\n%d\n%d\n", a,b,c);

    return 0;
}
