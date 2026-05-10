// Problem Link : https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-09/challenges/is-palindrome-15

#include <stdio.h>
#include <string.h>
int is_palindrome(char S[])
{
    int length = strlen(S);
    int i=0, j=length - 1;

    while (i<j)
    {
        if (S[i]!= S[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    char S[1001];
    scanf("%s",S);

    int result = is_palindrome(S);

    if (result==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}
