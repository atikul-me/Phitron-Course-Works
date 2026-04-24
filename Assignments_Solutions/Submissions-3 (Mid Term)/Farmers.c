// Problem Link : https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-09/challenges/farmers-1/problem

#include <stdio.h>
int main()
{
    int T, M1, M2, D, M3 = 0, D2 = 0, Sutro = 0; // Taking enough variable and remove garbage value to calculate easily 
    scanf("%d", &T);
    int A[T];

    for (int i=0; i<T; i++)
    {
        scanf("%d %d %d", &M1, &M2, &D); // Farmers, additional farmers, Days to finish
        
        M3 = M1+M2;
        Sutro = (D*M1)/M3;
        D2 = D - Sutro;

        printf("%d\n",D2);
    }
    return 0;
}
