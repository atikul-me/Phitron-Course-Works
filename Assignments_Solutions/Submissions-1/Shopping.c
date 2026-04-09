// Problem Link : https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-09/challenges/shopping-13

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    
    if (N>=1500)
    {
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes\n");
    }
    
    else if (N<1500 && N>1000)
    {
        printf("I will buy Punjabi\n");
    }
    
    else 
    {
        printf("Bad luck!\n");
    }
    return 0;
}
