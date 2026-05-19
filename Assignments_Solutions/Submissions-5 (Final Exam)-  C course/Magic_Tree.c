#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int lines = 5+(N/2)+1;
    
    for(int i = 1; i<=lines; i++)
    {
        for(int j = 1; j<= lines-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=(2*i-1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    int ucchota = 5;
    int space = 5;
    
    for(int i=1; i<= ucchota; i++)
    {
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=N; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
