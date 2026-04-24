// Problem Link : https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-09/challenges/count-me-4

#include <stdio.h>
#include <string.h>
int main()
{
    char S[10001];
    int count[26]={0};
    scanf("%s", S);

    for (int i=0; S[i]!='\0';i++)
    {
        if (S[i]>='a' && S[i]<='z')
        {
            int idx = S[i] - 'a'; 
            count[idx]++;
        }
    }
    for (int i=0; i<26; i++)
    {
        if(count[i]>0)
        {
            printf("%c - %d\n", i + 'a',count[i]);
        }
    }
    return 0;
}
