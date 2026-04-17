// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q

#include <stdio.h>
int main()
{
    // Axis Identify
    float X, Y;
    scanf("%f %f", &X, &Y);

     if (X==0.0 && Y==0.0) // Taking this condition at the very beginning to avoid double output
    {
        printf("Origem\n");
    }
    else if (X==0.0)
    {
        printf("Eixo Y\n");
    }
    else if (Y==0.0)
    {
        printf("Eixo X\n");
    }
    else if (X>=0 && Y>=0)
    {
        printf("Q1\n");
    }
    else if(X<0 && Y>=0)
    {
        printf("Q2\n");
    }
    else if(X<0 && Y<0)
    {
        printf("Q3\n");
    }
    else
    {
        printf("Q4\n");
    }
    return 0;
}