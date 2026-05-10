// Problem Link : https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-09/challenges/pattern-255-1

#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int space = N-1;

    int chinno = 1;

    for (int i=1; i<=(2*N-1); i++)
    {
        for (int j = 1; j<=space; j++)
        {
            printf(" "); // Space er jonne print
        }

        for (int j=1; j<=chinno; j++) // Chinno gular jonne loop
        {
            if (i%2!=0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n"); // Line gap er print
        if (i<N) // i boro hoile space komabo ar chinno 2 barabo
        {
            space--;
            chinno = chinno + 2;
        }
        else // Noyto eta
        {
            space++;
            chinno = chinno - 2;
        }
    }
    return 0;
}
