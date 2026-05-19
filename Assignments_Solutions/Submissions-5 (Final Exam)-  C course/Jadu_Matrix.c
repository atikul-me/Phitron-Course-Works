#include <stdio.h>
int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    int matrix[105][105];

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (N!=M)
    {
        printf("No\n");
        return 0;
    }

    int jadu_matrix=1;

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            if (i==j || j==N-1-i)
            {
               if (matrix[i][j]!=1)
               {
                   jadu_matrix = 0;
                   break;
               } 
            }
            else
            {
                if (matrix[i][j]!=0)
                {
                    jadu_matrix = 0;
                    break;
                }
            }
        }
        if(!jadu_matrix)
        {
            break;
        }
    }
    if (jadu_matrix)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
