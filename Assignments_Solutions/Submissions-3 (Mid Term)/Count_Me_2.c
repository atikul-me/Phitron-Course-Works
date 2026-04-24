// Problem Link : https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-09/challenges/count-me-2-2/problem

#include <stdio.h>
#include <string.h>
int main()
{
    char S[100001];
    int count = 0;
    scanf("%s", S);

    for (int i=0; S[i]!='\0'; i++)  // S[i]!='\0' for run the loop until null is found
    {
        char consonant = S[i]; // Taking values to consonant for comparing conditions
    if (consonant == 'a' || consonant == 'e' || consonant == 'i' || consonant == 'o' || consonant == 'u')
    {
        continue;   // To skip counting vowel
    }
    else
    {
        count++;
    }
}
    printf("%d", count);
    return 0;
}
