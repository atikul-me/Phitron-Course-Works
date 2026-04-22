// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B

#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001]; // Taking extra one size for storing the Null
    fgets(s,1000001,stdin);
    for (int i=0; s[i]!='\\'; i++) // Double backslash for identifying need slash
    {
        printf("%c", s[i]);
    }
    return 0;
}
