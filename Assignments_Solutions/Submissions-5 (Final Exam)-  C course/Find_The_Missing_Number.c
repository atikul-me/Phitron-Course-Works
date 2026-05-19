// Problem Link : https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-09/challenges/find-the-missing-number-11-3/problem

#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    
    while(T--) // t er maan 0 na hoile chalabo
    {
        long long int M,A,B,C;
        scanf("%lld %lld %lld %lld", &M,&A,&B,&C); 
        
        long long int gunfol = A*B*C; // Gunfol ber kore tulona korbo
        
        if(M==0)
        {
            printf("0\n"); // M er maan 0 hoile
        }
        else if(M % gunfol == 0)
        {
            printf("%lld\n", M/gunfol); // jdi vaagshesh na thake
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
