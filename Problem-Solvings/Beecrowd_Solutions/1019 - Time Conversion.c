#include <stdio.h>
 
int main() 
{
 
    int N, value;
    scanf("%d", &N);
    
    printf("%d:", N/3600);
    printf("%d:", (N%3600) / 60);
    printf("%d\n", N%60);
 
    return 0;
}