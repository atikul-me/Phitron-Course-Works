// Problem Link : https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-09/challenges/even-and-odd-8-2

#include <stdio.h>
void odd_even()  // Void Function no return
{   
    int n;
    scanf("%d",&n);
    int a[n];

    int even = 0, odd = 0;

    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", even, odd);
}

int main() // Main function
{
    odd_even();
    return 0;
}
