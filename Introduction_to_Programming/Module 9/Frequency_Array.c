#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int fre[6] = {0}; // One zero and all other will be zero too
    for (int i=0; i<n; i++)
    {
        int val = a[i]; // Taking i th index value to val intiger 
        fre[val]++; // Taking and increasing the value of the specific number
    }
    for (int i=0; i<6; i++)
    {
        printf("%d is counted : %d times\n", i, fre[i]);
    }
    return 0;
}
