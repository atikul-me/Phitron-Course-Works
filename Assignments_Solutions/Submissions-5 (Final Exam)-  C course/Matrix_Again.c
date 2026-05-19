// Problem Link : https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-09/challenges/matrix-38

#include <stdio.h>
int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    int matrix [105][105];
    
    for(int i = 0; i<N; i++) // 2D matrix er input shuru
    {
        for(int j = 0; j<M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int j = 0; j<M; j++)
    {
        printf("%d", matrix[N-1][j]);
        if(j<M-1)
        {
            printf(" ");
        }
    }
    printf("\n");
    
    for(int i = 0; i<N; i++)
    {
        printf("%d", matrix[i][M-1]);
        if(i<N-1)
        {
            printf(" ");
        }
    }
    printf("\n"); // sheshe new line
    return 0;
}
